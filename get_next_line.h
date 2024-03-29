/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosch <lrosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 15:27:37 by lrosch            #+#    #+#             */
/*   Updated: 2021/10/27 14:59:29 by lrosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

/* libft-utility functions */
unsigned int	ft_strlen(const char *s);
char			*ft_substr(char const *s, unsigned int start, int len);
int				ft_strlcpy(char *dest, const char *src, int size);
char			*ft_strjoin(char const *s1, char const *s2);

/* new main functions */
int				ft_check(char **str, int check, int fd);
char			*ft_getline(char **str, int fd);
char			*get_next_line(int fd);
int				ft_assign(int readl, char **str, char *buf, int fd);

#endif
