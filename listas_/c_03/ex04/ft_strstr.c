#include <stddef.h>

char	*ft_strstr(char *str, char *to_find);
char	*locate_rec(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	char	*c;
	char	*tf;
	char	*found;

	found = str;
	c = str;
	tf = to_find;
	while (*c != '\0')
	{
		if (*tf == '\0')
			break ;
		if (*c == *tf)
		{
			if (!found)
				found = c;
			tf++;
		}
		else
		{
			found = NULL;
			tf = to_find;
		}
		c++;
	}
	return (found);
}
