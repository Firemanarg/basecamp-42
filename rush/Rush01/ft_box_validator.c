#define N_SIZE 4

int	count_n_on_row(int n, int **boxes, int row);
int	count_n_on_col(int n, int **boxes, int col);
int	count_box_row(int **boxes, int row, int direction);
int	count_box_col(int **boxes, int col, int direction);

int	count_n_on_row(int n, int **boxes, int row)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (i < N_SIZE)
	{
		if (boxes[row][i] == n)
			count += 1;
		i += 1;
	}
	return (count);
}

int	count_n_on_col(int n, int **boxes, int col)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (i < N_SIZE)
	{
		if (boxes[i][col] == n)
			count += 1;
		i += 1;
	}
	return (count);
}

int	count_box_row(int **boxes, int row, int direction)
{
	int	greater;
	int	count;
	int	i;

	greater = 0;
	count = 0;
	i = 0;
	while ((direction > 0 && i < N_SIZE) || (direction < 0 && i >= 0))
	{
		if (boxes[row][i] > greater)
		{
			count += 1;
			greater = boxes[row][i];
		}
		i += 1 * direction;
	}
	return (count);
}

int	count_box_col(int **boxes, int col, int direction)
{
	int	greater;
	int	count;
	int	i;

	greater = 0;
	count = 0;
	i = 0;
	while ((direction > 0 && i < N_SIZE) || (direction < 0 && i >= 0))
	{
		if (boxes[i][col] > greater)
		{
			count += 1;
			greater = boxes[i][col];
		}
		i += 1 * direction;
	}
	return (count);
}
