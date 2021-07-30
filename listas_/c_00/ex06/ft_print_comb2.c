#include <unistd.h>
#ifndef FT_PRINT_COMB2_H
# define FT_PRINT_COMB2_H

void	ft_print_comb2(void);
void	print_num(int n);

void	ft_print_comb2(void)
{
	int		n1;
	int		n2;

	n1 = 0;
	while (n1 < 99)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			if (n1 < n2)
			{
				print_num(n1);
				write(1, " ", 1);
				print_num(n2);
				if (!((n1 == 98) && (n2 == 99)))
					write(1, ", ", 2);
			}
			n2 += 1;
		}
		n1 += 1;
	}
}

void	print_num(int n)
{
	char	result[2];
	int		n_copy;

	n_copy = n;
	result[0] = (n_copy / 10) + '0';
	result[1] = (n_copy % 10) + '0';
	write(1, &result, 2);
}

#endif
