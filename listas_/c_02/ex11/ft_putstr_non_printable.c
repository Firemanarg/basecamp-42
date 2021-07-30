#include <unistd.h>
#define HEX_DIGITS "0123456789abcdef"

void	ft_putstr_non_printable(char *str);
int		char_is_printable(char *c);
void	print_hex_char(unsigned char c);

void	ft_putstr_non_printable(char *str)
{
	char	*c;

	c = str;
	while (*c != '\0')
	{
		if (!char_is_printable(c))
			print_hex_char(*c);
		else
			write(1, c, 1);
		c++;
	}
}

int	char_is_printable(char *c)
{
	if (!(*c >= 32 && *c < 127))
		return (0);
	return (1);
}

void	print_hex_char(unsigned char c)
{
	char	hex[2];
	int		n;

	n = c / 16;
	hex[0] = HEX_DIGITS[n];
	n = c - (n * 16);
	hex[1] = HEX_DIGITS[n];
	write(1, "\\", 1);
	write(1, &hex, 2);
}
