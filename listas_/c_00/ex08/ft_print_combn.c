#include <unistd.h>
#ifndef FT_PRINT_COMBN_H
# define FT_PRINT_COMBN_H

void	ft_print_combn(int n);
void	generate_level(char *comb, int size, int index, char start);

void	ft_print_combn(int n)
{
	char	comb[9];
	int		i;

	i = 0;
	while (i <= 10 - n)
	{
		generate_level(comb, n, 0, '0' + i);
		i += 1;
	}
}

void	generate_level(char *comb, int size, int index, char start)
{
	int	i;

	comb[index] = start;
	if (index == size - 1)
	{
		write(1, &*comb, size);
		if (comb[0] != (10 + '0') - size)
			write(1, ", ", 2);
	}
	else
	{
		i = (comb[index] - '0') + 1;
		while (i <= 9)
		{
			generate_level(comb, size, index + 1, '0' + i);
			i += 1;
		}
	}
}

#endif
