#include "libft.h"

static char	*ft_strnew(size_t size)
{
	char *str;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str)
		ft_bzero(str, size);
	return (str);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    size_t i;

    str = ft_strnew(ft_strlen(s));
    if (s && f && str)
    {
        i = 0;
        while (s[i])
        {
            str[i] = f(i, s[i]);
            i++;
        }
        str[i] = 0;
    }
    return(str);
}