#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void *new;

	new = (void*)malloc(num*size);
	if (new == NULL)
		return(NULL);
	ft_bzero(new, 0, num*size);
	return(new);
}