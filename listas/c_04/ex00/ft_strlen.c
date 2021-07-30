int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	char	*c;
	int		len;

	len = 0;
	c = str;
	while (*c != '\0')
	{
		len += 1;
		c++;
	}
	return (len);
}
