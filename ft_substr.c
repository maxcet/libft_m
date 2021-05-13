#include "libft.h"


static char	*ft_strnew(size_t size)
{
	return ((char *)ft_memalloc(sizeof(char) * (size + 1)));
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *substr;
	i = 0;

	if (!s || start + len > ft_strlen(s))
		return(NULL);
	substr = ft_strnew(len);
	if (!substr)
		return(NULL);
	while (len)
	{
		substr[i++] = s [start++];
		len--;
	}
	substr[i] = 0;
	return(substr);
}