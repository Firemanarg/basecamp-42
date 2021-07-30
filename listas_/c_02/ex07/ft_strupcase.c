char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	char	*c;

	c = str;
	while (*c != '\0')
	{
		if (*c >= 'a' && *c <= 'z')
			*c = *c - ('a' - 'A');
		c++;
	}
	return (str);
}
