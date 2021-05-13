#include "libft.h"

static size_t ft_min(size_t a, size_t b)
{
	if (a < b)
		return(a);
	else
		return (b);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	res_len;

	dst_len = ft_strlen(dst);
	res_len = ft_min(dstsize, dst_len) + ft_strlen(src);
	if (!(dstsize <= dst_len))
	{
		dst += dst_len;
		dstsize -= dst_len;
		while (*src && dstsize-- > 1)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (res_len);
}
