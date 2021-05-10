#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	symb;

	symb = (unsigned char)c;
	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*ptr == symb)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
