#include "libft.h"

void ft_putstr_fd(char const *s, int fd)
{
	size_t index;

	index = 0;
	while (s[index] != 0)
	{
		ft_putchar_fd(s[index], fd);
		index++;
	}
}