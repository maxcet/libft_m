#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	sum;

	ptr = (unsigned char *)b;
	sum = (unsigned char) c;
	while (len--)
		*ptr++ = sum;
	return (b);
}
