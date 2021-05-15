#include "libft.h"

static char	*ft_strcpy(char *dest, char const *src)
{
	char	*temp;

	temp = dest;
	while (*src != 0)
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = 0;
	return (dest);
}

static char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dest[i] != 0)
		i++;
	j = 0;
	while (src[j] != 0)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

static char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str)
		ft_bzero(str, size);
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;

	if (s1 && s2)
	{
		dest = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (dest == NULL)
			return (NULL);
		ft_strcpy(dest, s1);
		ft_strcat(dest, s2);
		return (dest);
	}
	else
		return (NULL);
}
