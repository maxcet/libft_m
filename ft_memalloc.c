#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(size);
	if (ptr)
		ft_bzero(ptr, size);
	return (ptr);
}
