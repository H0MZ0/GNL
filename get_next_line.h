/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 01:21:53 by hakader           #+#    #+#             */
/*   Updated: 2024/12/30 09:40:28 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <fcntl.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 2
# endif

char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);
int 	ft_chrlen(const char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
int     ft_strchr(char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
