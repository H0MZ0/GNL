#include "get_next_line.h"

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
	{
		i ++;
	}
	return i;
}

int	get_line(char *str)
{
	int i = 0;
	if (str == NULL)
		return 0;
	while (str[i] != '\n' && str[i])
		i++;
	return i;
}

int main ()
{
	char str[1158];
	int fd = open("text.txt", O_RDONLY);
	int size = read(fd, str, 2);
	int k = get_line(str);
	str[k] = '\0';
	int fd2 = open("file.log", O_CREAT | O_RDWR, 0777);
	write(fd2, str, ft_strlen(str));
}