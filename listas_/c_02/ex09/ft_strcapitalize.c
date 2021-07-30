char	*ft_strcapitalize(char *str);
char	get_upper_char(char *c);
char	get_lower_char(char *c);
int		char_is_alphanumeric(char *c);

char	*ft_strcapitalize(char *str)
{
	char	*c;
	int		capt_next;

	capt_next = 1;
	c = str;
	while (*c != '\0')
	{
		if (!char_is_alphanumeric(c))
			capt_next = 1;
		else if (capt_next)
		{
			*c = get_upper_char(c);
			capt_next = 0;
		}
		else
			*c = get_lower_char(c);
		c++;
	}
	return (str);
}

int	char_is_alphanumeric(char *c)
{
	if (!((*c >= 'a' && *c <= 'z')
			|| (*c >= 'A' && *c <= 'Z')
			|| (*c >= '0' && *c <= '9')))
		return (0);
	return (1);
}

char	get_upper_char(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		return (*c - ('a' - 'A'));
	return (*c);
}

char	get_lower_char(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		return (*c + ('a' - 'A'));
	return (*c);
}
