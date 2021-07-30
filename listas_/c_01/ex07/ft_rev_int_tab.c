void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	max;
	int	aux;
	int	i;
	int	j;

	max = size / 2;
	i = 0;
	while (i < max)
	{
		aux = tab[i];
		j = (size - 1) - i;
		tab[i] = tab[j];
		tab[j] = aux;
		i += 1;
	}
}
