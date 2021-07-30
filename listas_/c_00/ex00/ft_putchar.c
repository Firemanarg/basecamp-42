#include <unistd.h>
#ifndef	FT_PUTCHAR_H
# define FT_PUTCHAR_H

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

#endif
