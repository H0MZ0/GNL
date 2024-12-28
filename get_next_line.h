/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 01:21:53 by hakader           #+#    #+#             */
/*   Updated: 2024/12/28 18:40:47 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <fcntl.h>
# include <stddef.h>

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 2
# endif

char    *get_next_line(int fd);
size_t  ft_strlen(const char *str);
char    *ft_strchr(const char *s, int c);
char    ft_strdup(const char *src);
char    *ft_strjoin(const char *s1, const char *s2);

#endif
