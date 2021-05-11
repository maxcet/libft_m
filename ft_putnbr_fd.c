#include "libft.h"
#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
unsigned num;

if (n < 0)
    ft_putchar_fd('-',fd);
num = (unsigned)ft_abs(n);
if (num >= 10)
{
    ft_putnbr_fd(num / 10, fd);
    ft_putnbr_fd(num % 10, fd);
}
else
    ft_putchar_fd(num + '0', fd);
}