#include "libft.h"

static char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str)
		ft_bzero(str, size);
	return (str);
}

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

static int	ft_numlen(int n)
{
	int	numlen;

	numlen = 0;
	if (n == 0)
		return (1);
	else
	{
		while (n != 0)
		{
			n /= 10;
			numlen++;
		}
	}
	return (numlen);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		numlen;
	int		sign;
	int		digit;

	if (n < 0)
		sign = 1;
	else
		sign = 0;
	numlen = ft_numlen(n) + sign;
	string = ft_strnew(numlen);
	if (string)
	{
		string[numlen] = 0;
		numlen--;
		while (numlen >= sign)
		{
			digit = n % 10;
			string[numlen--] = ft_abs(digit) + '0';
			n /= 10;
		}
		if (sign)
			string[0] = '-';
	}
	return (string);
}
