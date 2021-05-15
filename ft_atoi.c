#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c > 8 && c < 14) || c == 32)
		return (1);
	else
		return (0);
}

static int	ft_check(char c)
{
	if (c == '-')
		return (0);
	else
		return (-1);
}

int	ft_atoi(const char *str)
{
	int				i;
	unsigned int	result;
	int				sign;

	i = 0;
	result = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	if (result > 2147483648)
		return (ft_check(str[0]));
	return (sign * result);
}
