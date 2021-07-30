int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	char	*c;

	c = str;
	while (*c != '\0')
	{
		if (!((*c >= 'a' && *c <= 'z') || (*c >= 'A' && *c <= 'Z')))
			return (0);
		c++;
	}
	return (1);
}
