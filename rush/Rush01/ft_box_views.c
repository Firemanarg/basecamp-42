#include <unistd.h>
#include <stdio.h>
#include <stdio.h>
#define N_SIZE 4

/*
** box_views:
**		[0] -> up;
**		[1] -> down;
**		[2] -> left;
**		[3] -> right;
*/

int	decode_box_views_string(int *box_views[N_SIZE][N_SIZE], char *str);
int	str_is_valid(char *str);
int	get_expected_str_len(void);
int	validate_opposites(int *box_views[N_SIZE][N_SIZE]);
int	are_sides_compatible(int side1, int side2);

// Return 1 = success | 0 = error
int	decode_box_views_string(int *box_views[N_SIZE][N_SIZE], char *str)
{
	char	*c;
	int		side;
	int		index;

	write(1, "a", 1);
	if (str_is_valid(str) == 0)
		return (0);
	write(1, "b", 1);
	side = 0;
	index = 0;
	c = str;
	while (*c != '\0')
	{
		box_views[side][index] = (*c - '0');
		index += 1;
		if (index >= 4)
		{
			index = 0;
			side += 1;
		}
		c += 2;
	}
	if (validate_opposites(box_views) == 0)
		return (0);
	return (1);
}

int	str_is_valid(char *str)
{
	char	*c;
	int		index;

	index = 0;
	c = str;
	while (*c != '\0')
	{
		write(1, c, 1);
		if (index % 2 == 0)
		{
			if (*c <= '0' || *c > ('0' + N_SIZE))
				return (0);
		}
		else
		{
			if (*c != ' ')
				return (0);
		}
		index += 1;
		c++;
	}
	if (index != get_expected_str_len())
		return (0);
	return (1);
}

int	get_expected_str_len(void)
{
	return ((N_SIZE * N_SIZE * 2) - 1);
}

int	validate_opposites(int *box_views[N_SIZE][N_SIZE])
{
	int	i;
	int	j;
	int	side1;
	int	side2;

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < N_SIZE)
		{
			side1 = *box_views[i][j];
			side2 = *box_views[i + 1][j];
			if (are_sides_compatible(side1, side2))
				return (0);
			j += 1;
		}
		i += 2;
	}
	return (1);
}

int	are_sides_compatible(int side1, int side2)
{
	return ((side1 + side2 <= 2) || (side1 + side2 >= 6));
}

// int	are_sides_compatible(int side1, int side2)
// {
// 	if (side1 == 4 && side2 != 1)
// 		return (0);
// 	else if (side1 == 3 && (side2 != 1 && side2 != 2))
// 		return (0);
// 	else if (side1 == 2 && (side2 != 1 && side2 != 2 && side2 != 3))
// 		return (0);
// 	else if (side1 == 1 && side2 != 4)
// 		return (0);
// 	return (1);
// }