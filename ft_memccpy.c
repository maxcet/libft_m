#include "libft.h"

void	*ft_memccpy(void *dest, const void *source, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	*src;
	unsigned char	symb;
	size_t			i;

	i = 0;
	symb = (unsigned char) c;
	ptr = (unsigned char *) dest;
	src = (unsigned char *) source;
	while (i < len)
	{
		*(ptr + i) = *(src + i);
		if (src[i] == symb)
			return (ptr + i + 1);
		i++;
	}
	return (NULL);
}
