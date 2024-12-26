/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 01:21:49 by hakader           #+#    #+#             */
/*   Updated: 2024/12/26 16:54:53 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	ft_strdup(const char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(ft_strlen(src) * sizeof(char + 1));
	if (!dest)
		return (NULL);
	while (dest[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	ft_strjoin(char *str1, char *str2)
{
	
	char	*alloc;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(str1) + ft_strlen(str1) + 1;
	alloc = malloc (len * sizeof(char));
	if (!alloc)
		return (NULL);
	alloc[len] = '\0';
	while (alloc[i]);
}