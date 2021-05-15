#include "libft.h"

static char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str)
		ft_bzero(str, size);
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	substr = ft_strnew(len);
	if (!substr)
		return (NULL);
	while (len)
	{
		substr[i++] = s [start++];
		len--;
	}
	substr[i] = 0;
	return (substr);
}
