#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);
void	start_var(int *a, int *b);
void	print_arr(int *arr, int size);

int	main(void)
{
	int	vec[6] = {1, 2, 3, 4, 5, 6};
	int	*arr;

	arr = vec;
	print_arr(arr, 6);
	ft_sort_int_tab(arr, 6);
	print_arr(arr, 6);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	stop;
	int	init;
	int	temp;

	start_var(&stop, &init);
	while (stop <= size)
	{
		stop = 0;
		while (init++ <= size)
		{
			if (tab[init-1] > tab[init])
			{
				temp = tab[init-1];
				tab[init-1] = tab[init];
				tab[init] = temp;
            }
        }
        init = 0;
        while (init++ <= size)
        {
			if (tab[init - 1] <= tab[init])
				stop++;
		}
		init = 0;
	}
}

void	start_var(int *a, int *b)
{
	*a = 0;
	*b = 0;
}

void	print_arr(int *arr)
{
	int	*c;

	c = arr;
	while (* != '\0')
	{
		write(1, arr, 1);
		write(1, " ", 1);
	}
}

/*#include <stdlib.h>
#include <unistd.h>
#define N_SIZE 4

static int	g_boxes[4][4];
//static int	**g_views;

void	init_boxes(void);
void	print_arr(int arr[4][4]);

int	main(void)
{
	init_boxes();
	print_arr(g_boxes);
}*/