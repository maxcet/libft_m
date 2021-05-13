#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			need_len;
	size_t			hays_len;
	size_t			i;
	size_t			j;
	char			*ptr;

	ptr = (char *)haystack;
	need_len = ft_strlen(needle);
	hays_len = ft_strlen(haystack);
	if (need_len == 0)
		return (ptr);
	if (hays_len < need_len || len < need_len)
		return (NULL);
	i = 0;
	while (ptr[i] && i <= len - need_len)
	{
		j = 0;
		while (needle[j] && needle[j] == ptr[i + j])
			j++;
		if (j == need_len)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
