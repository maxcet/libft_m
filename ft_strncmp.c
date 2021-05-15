#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;
	size_t			i;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((ptr_s1[i] && ptr_s2[i]) && ptr_s1[i] == ptr_s2[i] && n - 1)
	{
		n--;
		i++;
	}
	return (ptr_s1[i] - ptr_s2[i]);
}
