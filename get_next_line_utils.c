/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 01:21:49 by hakader           #+#    #+#             */
/*   Updated: 2024/12/29 18:21:01 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_chrlen(const char *s, int c)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		sub = malloc(sizeof(char) * 1);
		sub[0] = '\0';
		return (sub);
	}
	if (start + len > s_len)
		len = s_len - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (start < len + 1)
	{
		sub[i] = s[start];
		i++;
	}
	return (sub);
}

// (strdup work)
char	*ft_strdup(const char *src)
{
	int		size;
	int		i;
	char	*dest;

	size = ft_strlen(src);
	dest = (char *)malloc(size * sizeof(char) + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[size] = '\0';
	return (dest);
}
