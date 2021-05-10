#include "libft.h"

int	ft_toupper(int c)
{
	if (ft_islower(c))
		c = c - 'a' + 'A';
	return (c);
}
