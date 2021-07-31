#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
int		is_base_valid(char *base, int *len_out);
void	base_conv_rec(long int n, char *base, int *base_len);

void	ft_putnbr_base(int nbr, char *base)
{
	int			base_len;
	long int	num;

	if (is_base_valid(base, &base_len))
	{
		num = nbr;
		if (nbr < 0)
		{
			num *= -1;
			write(1, "-", 1);
		}
		base_conv_rec(num, base, &base_len);
	}
}

int	is_base_valid(char *base, int *len_out)
{
	char	*c;
	char	*v;

	*len_out = 0;
	c = base;
	while (*c != '\0')
	{
		if (*c == '+' || *c == '-')
			return (0);
		v = base;
		while (v != c)
		{
			if (*v == *c)
				return (0);
			v++;
		}
		*len_out += 1;
		c++;
	}
	return (*len_out > 1);
}

void	base_conv_rec(long int n, char *base, int *base_len)
{
	int		d;
	char	c;

	if (n == 0)
		return ;
	base_conv_rec(n / *base_len, base, base_len);
	d = n % *base_len;
	c = base[d];
	write(1, &c, 1);
}
