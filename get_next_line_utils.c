/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 01:21:49 by hakader           #+#    #+#             */
/*   Updated: 2024/12/28 19:07:21 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
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

char	*ft_substr(char *src, int c)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	if (!src)
		return (NULL);
	while (src[i] != (char)c && src[i])
		i++;
	dest = malloc (sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	j = 0;
	while (j <= i)
	{
		dest[j] = src [j];
		j++;
	}
	dest[j] = '\0';
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
