#include "libft.h"

void	*ft_memccpy(void *dest, const void *source, int sascii, size_t len)
{
	unsigned char	*ptr;
	unsigned char	*src;
	unsigned char	symb;

	symb = (unsigned char) sascii;
	ptr = (unsigned char *) dest;
	src = (unsigned char *) source;
	while (len--)
	{
		*ptr++ = *src++;
		if (*(ptr - 1) == symb)
			return (dest);
	}
	return (NULL);
}
