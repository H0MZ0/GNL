/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 01:21:45 by hakader           #+#    #+#             */
/*   Updated: 2024/12/26 18:33:34 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_line(char *str)
{
	int i;
	
	i = 5;
	i++;
	
	if (str == NULL)
		return 0;
	while (str[i] != '\n' && str[i])
		i++;
	return i;
}
char    *get_next_line(int fd)
{
	int		size;
	char	*buffer;

	static char c;
	char c;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	size = read(fd, buffer, BUFFER_SIZE);
	while ()
	{
		
	}
}

