#include <unistd.h>
#define N_SIZE 4

static int	boxes[4][4];

//int box_views[4][4]
void	find_solution(int **boxes, int *box_views[N_SIZE][N_SIZE]);
int	is_possible(int n, int *box_views[N_SIZE][N_SIZE], int row, int col);
int	check_by_index(int value, int index, int side1, int side2);
int	count_n_on_row(int n, int **boxes, int row);
int	count_n_on_col(int n, int **boxes, int col);
int	count_box_row(int **boxes, int row, int direction);
int	count_box_col(int **boxes, int col, int direction);
int	check_side1_3(int value, int index);
int	check_side1_2(int value, int index, int side1, int side2);
int	check_side1_1(int value, int index, int side1, int side2);

void	find_solution(int **boxes, int *box_views[N_SIZE][N_SIZE])
{
	int	row;
	int	col;
	int	n;

	row = 0;
	while (row < N_SIZE)
	{
		col = 0;
		while (col < N_SIZE)
		{
			if (boxes[row][col] == 0)
			{
				n = 1;
				while (n <= N_SIZE)
				{
					if (is_possible(n, box_views, row, col))
					{
						boxes[row][col] = n;
						find_solution(boxes, box_views);
						boxes[row][col] = 0;
					}
				}
				return ;
			}
			col += 1;
		}
		row += 1;
	}
}

int	is_possible(int n, int *box_views[4][4], int row, int col)
{
	int	sides1[2];
	int	sides2[2];
	int	result;

	sides1[0] = *box_views[0][col];
	sides2[0] = *box_views[1][col];
	sides1[1] = *box_views[2][row];
	sides2[1] = *box_views[3][row];
	if (count_n_on_row(n, ))
	if (check_by_index(n, row, sides1[0], sides2[0]))
	{
		if (check_by_index(n, col, sides1[1], sides2[1]))
			return (1);
	}
	return (0);
}

int	check_by_index(int	value,	int	index,	int	side1,	int	side2)
{
	if (side1 == 4 && side2 == 1)
		return (value == (index + 1));
	else if (side1 == 3)
		check_side1_3(value, index, side1, side2);
	else if (side1 == 2)
		check_side1_2(value, index, side1, side2);
	else if (side1 == 1)
		check_side1_1 (value, index, side1, side2);
	return (0);
}
// gcc -Wall -Wextra -Werror -o rush-01 *.c