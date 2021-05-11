#include "libft.h"
static int ft_numlen(int n, int sign)
{
    int numlen;
    numlen = 1;
    while (n /= 10)
        numlen++;
    return(numlen + sign);
}


char    *ft_itoa(int n)
{
char *string;
int numlen;
int sign;
int digit;

if (n < 0)
    sign = 1;
else
    sign = 0;
numlen = ft_numlen(n, sign);
string = ft_strnew(numlen);
if (string)
{
    string[numlen] = 0;
    numlen--;
    while (numlen>=sign)
    {
        digit = n % 10;
        string[numlen--] = ft_abs(digit) + '0';
        n /= 10;
    }
    if (sign)
        string[0] = '-';
}
return(string);
}