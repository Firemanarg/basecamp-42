#include <unistd.h>

void	ft_putnbr(int nb);
void	put_rec(long int n);

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	put_rec(n);
}

void	put_rec(long int n)
{
	char	c;

	if (n == 0)
		return ;
	put_rec(n / 10);
	c = n % 10;
	c += '0';
	write(1, &c, 1);
}
