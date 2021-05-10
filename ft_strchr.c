#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	char	sym;

	ptr = (char *) s;
	sym = (char) c;
	while (*ptr && !(*ptr == sym))
		ptr++;
	if (*ptr == sym)
		return (ptr);
	else
		return (NULL);
}
