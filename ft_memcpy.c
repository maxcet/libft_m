#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*sym;

	ptr = (unsigned char *) dst;
	sym = (unsigned char *) src;
	while (n--)
		*ptr++ = *sym++;
	return (dst);
}
