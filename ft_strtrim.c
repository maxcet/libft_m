#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	size_t		start;
	size_t		finish;
	size_t		len;

	str = NULL;
	if (s1 != NULL && set == NULL)
		str = ft_strdup(s1);
	else if (s1 != NULL)
	{
		start = 0;
		finish = ft_strlen(s1);
		while (s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL)
			start++;
		while (finish > 0 && ft_strchr(set, s1[finish]) != NULL)
			finish--;
		len = finish - start + 1;
		str = ft_substr(s1, (unsigned int)start, len);
	}
	return (str);
}
