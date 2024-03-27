/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agras <agras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 19:09:34 by agras             #+#    #+#             */
/*   Updated: 2021/12/22 19:19:45 by agras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

char	*ft_strjoin(char *s1, char *s2);
char	*ft_strndup(char *str, int n);
char	*get_next_line(int fd);
int		ft_strlen(char *str);

#endif