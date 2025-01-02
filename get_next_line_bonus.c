/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 20:16:02 by hakader           #+#    #+#             */
/*   Updated: 2025/01/03 00:54:57 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	ft_free(char **str)
{
	if (*str)
	{
		free(*str);
		*str = NULL;
	}
}

char	*ft_handle(char *full_buffer, char *line, char *tmp, char *buffer)
{
	int	bytes;

	if (ft_strchr(full_buffer, '\0') == -1)
	{
		line = ft_strjoin(line, tmp);
		line = ft_strjoin(line, full_buffer);
		return (ft_free(&tmp), ft_free (&buffer), ft_free (&full_buffer), line);
	}
	else
	{
		bytes = ft_strchr (full_buffer, '\n');
		line = ft_substr (full_buffer, 0, bytes + 1);
		tmp = ft_substr (full_buffer, bytes + 1,
				ft_strlen(full_buffer) - bytes - 1);
	}
	return (ft_free (&buffer), line);
}

char	*get_line(int fd, char *line)
{
	ssize_t		bytes;
	char		*buffer;
	char		*full_buffer;
	static char	*tmp[__FD_MAX__];

	full_buffer = ft_strdup(tmp[fd]);
	buffer = malloc(BUFFER_SIZE + 1);
	buffer[BUFFER_SIZE] = '\0';
	while (ft_strchr(buffer, '\n') == -1)
	{
		bytes = read (fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
			return (ft_free (&tmp[fd]), ft_free (&buffer), NULL);
		else if (bytes == 0)
			break ;
		full_buffer = ft_strjoin(full_buffer, buffer);
	}
	line = ft_handle(full_buffer, line, tmp[fd], buffer);
	tmp[fd] = ft_strdup(full_buffer);
	return (line);
}

char	*get_next_line(int fd)
{
	char	*line;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = get_line(fd, line);
	return (line);
}
