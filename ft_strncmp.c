#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;
	size_t			index;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	index = 0;
	while ((ptr_s1 || ptr_s2 ) && index < n)
	{
		if (ptr_s1[index] != ptr_s2[index])
			return (ptr_s1[index] - ptr_s2[index]);
		index++;
	}
	return (0);
}
