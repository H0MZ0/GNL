/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 01:21:49 by hakader           #+#    #+#             */
/*   Updated: 2024/12/26 17:24:06 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)c);
		i++;
	}
	return (NULL);
}

char	ft_strdup(const char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(ft_strlen(src) + 1 * sizeof(char));
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

char	*ft_strjoin(const char *s1, const char *s2)
{
	
	char	*alloc;
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s1) + 1;
	alloc = malloc (len * sizeof(char));
	if (!alloc)
		return (NULL);
	alloc[len] = '\0';
	while (alloc[i] && s1[i])
	{
		alloc[i] = s1[i];
		i++;
	}
	while (alloc[i] && s2[j])
	{
		alloc[i] = s2[j];
		i++;
		j++;
	}
	return (alloc);
}
