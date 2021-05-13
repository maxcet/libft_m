#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;

	ptr = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	if (ptr < ptr2)
		while (len--)
			*ptr++ = *ptr2++;
	else
	{
		ptr +=len;
		ptr2 +=len;
		while (len--)
			*--ptr = *--ptr2;
	}
	return (dst);
}
