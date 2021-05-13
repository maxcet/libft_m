#include "libft.h"


static char	*ft_strnew(size_t size)
{
	return ((char *)ft_memalloc(sizeof(char) * (size + 1)));
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
