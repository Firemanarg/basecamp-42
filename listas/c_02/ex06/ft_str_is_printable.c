int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	char	*c;

	c = str;
	while (*c != '\0')
	{
		if (!(*c >= 32 && *c < 127))
			return (0);
		c++;
	}
	return (1);
}
