int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	char	*c;

	c = str;
	while (*c != '\0')
	{
		if (!(*c >= 'A' && *c <= 'Z'))
			return (0);
		c++;
	}
	return (1);
}
