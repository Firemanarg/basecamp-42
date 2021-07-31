#define WHITESPACES " \f\n\r\t\v"

int		ft_atoi_base(char *str, char *base);
int		is_valid(char c, char *accepted);
int		is_base_valid(char *base, int *len_out);
char	*get_signal(char *str, int *signal);
int		find_base_index(char c, char *base);

int	ft_atoi_base(char *str, char *base)
{
	char	*c;
	int		signal;
	int		number;
	int		base_len;

	if (!is_base_valid(base, &base_len))
		return (0);
	c = str;
	while (is_valid(*c, WHITESPACES))
		c++;
	c = get_signal(c, &signal);
	number = 0;
	while (is_valid(*c, base))
	{
		number *= base_len;
		number += find_base_index(*c, base);
		c++;
	}
	number *= signal;
	return (number);
}

int	is_valid(char c, char *accepted)
{
	char	*dig;

	dig = accepted;
	while (*dig != '\0')
	{
		if (c == *dig)
			return (1);
		dig++;
	}
	return (0);
}

char	*get_signal(char *str, int *signal)
{
	char	*c;

	*signal = 1;
	c = str;
	while (*c == '-' || *c == '+')
	{
		if (*c == '-')
			(*signal) *= -1;
		c++;
	}
	return (c);
}

int	find_base_index(char c, char *base)
{
	char	*b;
	int		i;

	b = base;
	i = 0;
	while (*b != '\0' && *b != c)
	{
		b++;
		i += 1;
	}
	return (i);
}

int	is_base_valid(char *base, int *len_out)
{
	char	*c;
	char	*v;

	*len_out = 0;
	c = base;
	while (*c != '\0')
	{
		if (*c == '+' || *c == '-' || !(*c > 32 && *c < 127))
			return (0);
		v = base;
		while (v != c)
		{
			if (*v == *c)
				return (0);
			v++;
		}
		*len_out += 1;
		c++;
	}
	return (*len_out > 1);
}
