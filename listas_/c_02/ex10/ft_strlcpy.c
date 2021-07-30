unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	len;
	char			*s;
	char			*d;

	d = dest;
	s = src;
	len = 0;
	while (*s != '\0')
	{
		if (len < n - 1)
		{
			*d = *s;
			d++;
		}
		s++;
		len += 1;
	}
	*d = '\0';
	return (len);
}
