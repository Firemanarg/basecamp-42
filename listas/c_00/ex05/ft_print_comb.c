#include <unistd.h>
#ifndef FT_PRINT_COMB_H
# define FT_PRINT_COMB_H

void	ft_print_comb(void);
int		cmp_str(char *str1, char *str2);

int	cmp_str(char *str1, char *str2)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (i < 3)
	{
		if (str1[i] != str2[i])
		{
			result = 1;
			break ;
		}
		i += 1;
	}
	return (result);
}

void	ft_print_comb(void)
{
	char	digits[3];

	digits[0] = '0';
	while (digits[0] <= '9')
	{
		digits[1] = digits[0] + 1;
		while (digits[1] <= '9')
		{
			digits[2] = digits[1] + 1;
			while (digits[2] <= '9')
			{
				write(1, &digits[0], 1);
				write(1, &digits[1], 1);
				write(1, &digits[2], 1);
				if (cmp_str(digits, "789"))
					write(1, ", ", 2);
				digits[2] += 1;
			}
			digits[1] += 1;
		}
		digits[0] += 1;
	}
}

#endif