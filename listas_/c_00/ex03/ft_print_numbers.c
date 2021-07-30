#include <unistd.h>
#ifndef FT_PRINT_NUMBERS_H
# define FT_PRINT_NUMBERS_H

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	int	n;

	n = '0';
	while (n <= '9')
	{
		write(1, &n, 1);
		n += 1;
	}
}

#endif
