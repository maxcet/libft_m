#include "libft.h"

static char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str)
		ft_bzero(str, size);
	return (str);
}

char	*ft_strdup(const char *s1)
{
	size_t	index;
	char	*res;

	res = ft_strnew(ft_strlen(s1));
	if (res)
	{
		index = 0;
		while (s1[index])
		{
			res[index] = s1[index];
			index++;
		}
		res[index] = '\0';
	}
	return (res);
}
