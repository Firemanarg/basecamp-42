#include <unistd.h>
#ifndef FT_IS_NEGATIVE_H
# define FT_IS_NEGATIVE_H

void	ft_is_negative(int n);
void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
		//write(1, "N", 1);
	else
		write(1, "P", 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

#endif
