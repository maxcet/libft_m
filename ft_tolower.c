#include "libft.h"

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		c = c - 'A' + 'a';
	return (c);
}
