/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agras <agras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 19:09:34 by agras             #+#    #+#             */
/*   Updated: 2024/03/27 19:40:06 by agras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#define BUFFER_SIZE 42

# include <unistd.h>
# include <stdlib.h>

char	*ft_strjoin(char *s1, char *s2);
char	*ft_strndup(char *str, int n);
char	*get_next_line(int fd);
int		ft_strlen(char *str);

#endif