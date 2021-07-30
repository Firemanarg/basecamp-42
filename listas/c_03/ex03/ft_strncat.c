char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*s;
	char			*d;

	d = dest;
	while (*d != '\0')
		d++;
	i = 0;
	s = src;
	while ((*s != '\0') && (i < nb))
	{
		*d = *s;
		i += 1;
		d++;
		s++;
	}
	*d = '\0';
	return (dest);
}
