#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	myPow(int x, int n)
{
	int	i;
	int	number;

	i = 0;
	number = 1;
	while (i++ < n)
		number *= x;
	return (number);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_putchar(nb + '0');
}

int	is_ascending(int n)
{
	int	ascending;
	int	temp;

	ascending = 1;
	temp = n % 10;
	if (n < 10)
		return (0);
	while (n / 10 > 0)
	{
		n /= 10;
		if (temp <= n % 10)
		{
			ascending = 0;
			break ;
		}
		temp = n % 10;
	}
	return (ascending);
}

void	ft_print_combn(int n)
{
	int	i;
	int	j;

	if (n < 0 || n > 10)
		return ;
	i = 0;
	j = myPow(10, n);
	while (i < j)
	{
		if (i < 10)
		{
			ft_putchar('0');
			ft_putchar(i + '0');
			ft_putchar(',');
			ft_putchar(' ');
		}
		else if (is_ascending(i))
		{
			ft_putnbr(i);
			ft_putchar(',');
			ft_putchar(' ');
		}
		i++;
	}
	write(1, "\b\b", 2);
}
