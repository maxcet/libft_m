#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c > 8 && c < 14) || c == 32)
		return (1);
	else
		return (0);
}

int  ft_atoi(const char *str)
{
  int        i;
  unsigned int  result;
  int        sign;
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
    result *= 10;
    result += str[i] - 48;
    i++;
  }
  if (result > 2147483648)
  {
    if (str[0] == '-')
      return (0);
    else
      return (-1);
  }
  return (sign * result);
}