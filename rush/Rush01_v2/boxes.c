#include <stdlib.h>
#include <unistd.h>
#define N_SIZE 4

static int	g_boxes[4][4];
//static int	**g_views;

void	init_boxes(void);
void	print_arr(int arr[4][4]);

void	init_boxes(void)
{
	int	i;
	int	j;

	//g_boxes = malloc(N_SIZE * N_SIZE * sizeof(int *));
	i = 0;
	while (i < N_SIZE)
	{
		j = 0;
		while (j < N_SIZE)
		{
			g_boxes[i][j] = 0;
			j += 1;
		}
		i += 1;
	}
}

void	print_arr(int arr[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < N_SIZE)
	{
		j = 0;
		while (j < N_SIZE)
		{
			write(1, &arr[i][j], 1);
			j += 1;
		}
		i += 1;
	}
}
