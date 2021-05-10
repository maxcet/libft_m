#include "libft.h"

void	ft_memccpy(void *dest, const void *source, int sascii, size_t len)
{
	unsigned char	*ptr;
	unsigned char	*source2;
	unsigned char	symb;

	symb = (unsigned char) sascii;
	ptr = (unsigned char *) dest;
	source2 = (unsigned char *) source;
	while (len--)
	{
		*ptr++ = *source2++;
		if (*(ptr - 1) == symb)
			return (dest);
	}
	return (NULL);
}
