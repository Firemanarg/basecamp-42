char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	char	*c;

	c = str;
	while (*c != '\0')
	{
		if (*c >= 'A' && *c <= 'Z')
			*c = *c + ('a' - 'A');
		c++;
	}
	return (str);
}
