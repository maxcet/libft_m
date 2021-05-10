#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long	result;
	size_t			i;
	int				sign;

	sign = 1;
	result = 0;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	if ((sign == -1 || str[i] == '+'))
		i++;
	while (ft_isdigit(str[i]))
		result = (result * 10) + (str[i++] - '0');
	return ((int)(result * sign));
}
