#include <unistd.h>
#ifndef FT_PRINT_REVERSE_ALPHABET_H
# define FT_PRINT_REVERSE_ALPHABET_H

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	int	c;

	c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		c -= 1;
	}
}

#endif
