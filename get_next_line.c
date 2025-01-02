/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 17:26:11 by hakader           #+#    #+#             */
/*   Updated: 2025/01/02 02:17:13 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_free(char **str)
{
	if (*str)
	{
		free(*str);
		*str = NULL;
	}
}

char	*get_line(int fd, char *line)
{
	ssize_t		bytes;
	char		*buffer;
	char		*full_buffer;
	static char	*tmp;

	full_buffer = ft_strdup(tmp);
	buffer = malloc(BUFFER_SIZE + 1);
	buffer[BUFFER_SIZE] = '\0';
	while (ft_strchr(buffer, '\n') == -1)
	{
		bytes = read (fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
			return (ft_free (&tmp), ft_free (&buffer), NULL);
		else if (bytes == 0)
			break ;
		full_buffer = ft_strjoin(full_buffer, buffer);
	}
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

char	*get_next_line(int fd)
{
	char	*line;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = get_line(fd, line);
	return (line);
}
int main()
{
	char	*str;
	int fd = open("text.txt", O_RDONLY);

	while ((str = get_next_line(fd)))
	{
		printf("%s", str);
		free (str);
	}
	close (fd);
}