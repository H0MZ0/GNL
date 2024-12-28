/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 17:26:11 by hakader           #+#    #+#             */
/*   Updated: 2024/12/28 18:49:01 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_line(int fd, char *buffer)
{
	static char	*line;
	int		i;

	i = 0;
	while (ft_strchr(line, '\n') == NULL)
		read (fd, line, BUFFER_SIZE);
	while (line[i] != '\n' || line[i] != '\0')
		buffer[i++] = line[i++];
	buffer[i] = '\0';
	free (line);
	return (buffer);
}

char    *get_next_line(int fd)
{
	static char	*buffer;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	get_line(fd, buffer);
	return (buffer);
}