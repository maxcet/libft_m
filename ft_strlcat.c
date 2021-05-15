#include "libft.h"

static size_t	ft_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	res_len;

	dst_len = ft_strlen(dst);
	res_len = ft_min(size, dst_len) + ft_strlen(src);
	if (!(size <= dst_len))
	{
		dst += dst_len;
		size -= dst_len;
		while (*src && size-- > 1)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (res_len);
}
