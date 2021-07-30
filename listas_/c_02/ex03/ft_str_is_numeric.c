int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	char	*c;

	c = str;
	while (*c != '\0')
	{
		if (!(*c >= '0' && *c <= '9'))
			return (0);
		c++;
	}
	return (1);
}
