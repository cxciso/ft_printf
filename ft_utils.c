#include "ft_printf.h"

void ft_putcharc(char c, int *count) 
{
    write(1, &c, 1);
    *count++;
}

void	ft_putnbrc(int n, int *count)
{
	if (n == 0)
	{
		ft_putcharc('0', count);
		return ;
	}
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putcharc('-', count);
			ft_putcharc('2', count);
			n = 147483648;
		}
		else
		{
			ft_putcharc('-', count);
			n = -n;
		}
	}
	if (n > 9)
	{
		ft_putnbrc(n / 10, count);
	}
	ft_putcharc((n % 10) + '0', count);
}

void	ft_putstrc(char *s, int *count)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

void	ft_putunsigned(unsigned int i, int *count)
{
    if (n >= 10)
        ft_putunsigned(n / 10, count);
    ft_putchar((n % 10) + '0', count);
}

void ft_puthex(unsigned int n, int uppercase, int *count)
{
    char *base;

    if (uppercase)
        base = "0123456789ABCDEF";
    else
        base = "0123456789abcdef";
    if (n >= 16)
        ft_puthex(n / 16, uppercase, count);
    ft_putchar(base[n % 16], count);
}
