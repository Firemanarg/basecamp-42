int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	char	*c;

	c = str;
	while (*c != '\0')
	{
		if (!(*c >= 'a' && *c <= 'z'))
			return (0);
		c++;
	}
	return (1);
}
