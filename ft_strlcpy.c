#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	index;
	unsigned int	count;

	count = 0;
	while (src[count])
		count++;
	index = 0;
	while (src[index] && index < (dstsize - 1))
	{
		dst[index] = src[index];
		index++;
	}
	while (index < dstsize)
		dst[index++] = '\0';
	return (count);
}
