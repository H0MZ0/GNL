/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 01:21:45 by hakader           #+#    #+#             */
/*   Updated: 2024/12/26 16:38:11 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"



int	get_line(char *str)
{
	int i;
	
	i = 0;
	
	if (str == NULL)
		return 0;
	while (str[i] != '\n' && str[i])
		i++;
	return i;
}
	int size = read(fd, str, 2);

int main ()
{
	char str[1158];
	int fd = open("text.txt", O_RDONLY);
	int k = get_line(str);
	str[k] = '\0';
	int fd2 = open("file.log", O_CREAT | O_RDWR, 0777);
	write(fd2, str, ft_strlen(str));
}