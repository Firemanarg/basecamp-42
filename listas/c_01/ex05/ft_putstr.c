#include <unistd.h>
#ifndef FT_PUTSTR_H
# define FT_PUTSTR_H

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	char	*c;

	c = str;
	while (*c != '\0')
	{
		write(1, c, 1);
		c++;
	}
}

#endif