#include "libft.h"

char *ft_strcpy(char *dest, char const *src)
{
	char *temp;

	temp = dest;
	while(*src != 0)
	{
		*temp = *src; 
		temp++;
		src++;
	}
	*temp = 0;
	return(dest);
}