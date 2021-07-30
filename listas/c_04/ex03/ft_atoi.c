#define WHITESPACES " \f\n\r\t\v"
#define BASE "0123456789"
#define BASE_LEN 10

int		ft_atoi(char *str);
int		is_valid(char c, char *accepted);
int		find_base_index(char c, char *base);
char	*skip_whitespaces(char *str);
char	*get_signal(char *str, int *signal);

int	ft_atoi(char *str)
{
	char	*c;
	int		signal;
	int		number;

	c = skip_whitespaces(str);
	c = get_signal(c, &signal);
	number = 0;
	while (is_valid(*c, BASE))
	{

	}
}

int	is_valid(char c, char *accepted)
{
	int	*dig;

	dig = accepted;
	while (*dig != '\0')
	{
		if (c == *dig)
			return (1);
		dig++;
	}
	return (0);
}

char	*skip_whitespaces(char *str)
{
	char	*it;

	it = str;
	while (is_valid(*it, WHITESPACES))
		it++;
	return (it);
}

char	*get_signal(char *str, int *signal)
{
	char	*c;

	*signal = 1;
	c = str;
	while (*c == '-' || *c == '+')
	{
		if (*c == '-')
			*signal *= -1;
		c++;
	}
	return (c);
}

int		find_base_index(char c, char *base)
{
	char	*b;
	int		i;

	i = 0;
	while (*b != '\0' || *b != c)
	{
		b++;
		i += 1;
	}
	return (i);
}
