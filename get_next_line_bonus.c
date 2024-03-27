/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agras <agras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:08:54 by agras             #+#    #+#             */
/*   Updated: 2021/12/29 20:28:01 by agras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <string.h>

char	*cut_buff(char **left, int i)
{
	char	*line;
	char	*tmp;

	line = ft_strndup(*left, i);
	tmp = (*left);
	(*left) += i;
	*left = ft_strndup(*left, BUFFER_SIZE);
	free(tmp);
	return (line);
}

char	*exit_func(char **left, char *buf)
{
	char	*tmp;

	tmp = NULL;
	if (*left)
	{
		if ((*left)[0])
			tmp = ft_strndup(*left, ft_strlen(*left));
	}
	free(*left);
	free(buf);
	*left = NULL;
	return (tmp);
}

char	*get_next_line(int fd)
{
	static char		*left[1024];
	char			*buf;
	int				i;
	int				bytes_read;

	i = 0;
	if (left[fd])
	{
		while (left[fd][i])
		{
			if (left[fd][i] == '\n')
				return (cut_buff(&left[fd], i + 1));
			i++;
		}
	}
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	bytes_read = read(fd, buf, BUFFER_SIZE);
	if (bytes_read <= 0)
		return (exit_func(&left[fd], buf));
	buf[bytes_read] = '\0';
	left[fd] = ft_strjoin(left[fd], buf);
	return (get_next_line(fd));
}
