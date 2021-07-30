char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;
	int				src_ended;

	src_ended = 0;
	index = 0;
	while (index < n)
	{
		if (src_ended == 0)
		{
			if (src[index] == '\0')
				src_ended = 1;
			dest[index] = src[index];
		}
		else
			dest[index] = '\0';
		index += 1;
	}
	return (dest);
}
