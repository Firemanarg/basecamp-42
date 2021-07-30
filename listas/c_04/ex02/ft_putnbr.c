#include <unistd.h>

void	ft_putnbr(int nb);
void	init_array(char *vec, int *size, int nb);
void	print_vec(char *vec, int size);

void	ft_putnbr(int nb)
{
	char	digits[10];
	int		size;

	init_array(digits, &size, nb);
	if (nb < 0)
		write(1, "-", 1);
	print_vec(digits, size);
}

void	init_array(char *vec, int *size, int nb)
{
	int	multiplier;
	int	digit;
	int	i;

	if (nb == 0)
	{
		vec[0] = '0';
		*size = 1;
	}
	else
	{
		*size = 0;
		multiplier = 1;
		if (nb < 0)
			multiplier = -1;
		i = 0;
		while (nb != 0)
		{
			digit = ((nb % 10) * multiplier) + '0';
			vec[i] = digit;
			nb /= 10;
			i += 1;
		}
		*size = i;
	}
}

void	print_vec(char *vec, int size)
{
	int	i;

	i = size - 1;
	while (i >= 0)
	{
		write(1, &vec[i], 1);
		i -= 1;
	}
}
