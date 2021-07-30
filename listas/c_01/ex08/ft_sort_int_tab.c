#ifndef FT_SORT_INT_TAB
# define FT_SORT_INT_TAB

void	ft_sort_int_tab(int *tab, int size);
void	swap(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	int	l;
	int	i;

	l = size - 1;
	while (l > 0)
	{
		i = 0;
		while (i < l)
		{
			if (tab[i] > tab[i + 1])
				swap(&tab[i], &tab[i + 1]);
			i += 1;
		}
		l -= 1;
	}
}

void	swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

#endif