/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agras <agras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:34:55 by agras             #+#    #+#             */
/*   Updated: 2024/03/27 19:48:56 by agras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>

#include "get_next_line.h"

void	printf_file(int fd)
{
	char	*line;

	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		printf("%s", line);
		free(line);
	}
}

int	main(int ac, char **av)
{
  if (ac < 2)
  {
    printf("Usage: %s <file>\n", av[0]);
    return (1);
  }
  int fd = open(av[1], O_RDONLY);
  if (fd == -1)
  {
    printf("Error: Cannot open file %s\n", av[1]);
    return (1);
  }

	printf_file(fd);
	return (0);
}
