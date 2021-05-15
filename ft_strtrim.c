#include "libft.h"

static int	ft_find_set(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	size_t		begin;
	size_t		end;

	str = NULL;
	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		ft_strdup("");
	begin = 0;
	end = ft_strlen(s1);
	while (ft_find_set(s1[begin], set) == 0)
		begin++;
	if (begin == ft_strlen(s1))
	{
		str = ft_strdup("");
		if (!(str))
			return (NULL);
		else
			return (str);
	}
	while (ft_find_set(s1[end - 1], set) == 0)
		end--;
	str = ft_substr(s1, begin, end - begin);
	return (str);
}
