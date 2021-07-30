#include <unistd.h>
#ifndef FT_PRINT_ALPHABET_H
# define FT_PRINT_ALPHABET_H

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	int	c;

	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		c += 1;
	}
}

#endif