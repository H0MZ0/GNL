/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 17:26:11 by hakader           #+#    #+#             */
/*   Updated: 2024/12/29 18:03:10 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_line(int fd)
{
	int			bytes;
	char		*buffer;
	char		*tmp;
	char		*full_buffer;
	static char	*line;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	while (ft_strchr(buffer, '\n') == -1)
	{
		bytes = read (fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
		{
			free (buffer);
			return (NULL);
		}
		if (bytes == 0)
			break;
		buffer[bytes] = '\0';
		full_buffer = ft_strjoin(full_buffer, buffer);
	}
	free (buffer);
	bytes = ft_strchr(full_buffer, '\n');
	line = ft_substr (full_buffer, 0, bytes);
	tmp = ft_substr (full_buffer, bytes + 1, ft_strlen(full_buffer));
	return (line);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buffer;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = get_line(fd);
	return (buffer);
}

int main()
{
	char	*str;
	int fd = open ("text.txt", O_RDONLY);
	if (fd < 0)
		return(0);
	str = get_next_line (fd);
	printf("%s", str);
	close (fd);
}