int	check_side2_1(int value, int index);
int	check_side2_2(int value, int index);
int	check_side2_3(int value, int index);

int	check_side1_3(int value, int index)
{
	if (index == 0)
		return (value == 1 || value == 2);
	else if (index == 1)
		return (value == 1 || value == 3);
	else if (index == 2)
		return (value == 1 || value == 2 || value == 3);
	else if (index == 3)
		return (value == 4);
	else if (index == 0)
		return (value == 1 || value == 2);
	else if (index == 1)
		return (value == 2 || value == 3);
	else if (index == 2)
		return (value == 4);
	else if (index == 3)
		return (value == 1 || value == 2 || value == 3);
	return (0);
}

int	check_side1_2(int value, int index, int side2)
{
	if (side2 == 1)
		return (check_side2_1(value, index));
	else if (side2 == 2)
		return (check_side2_2(value, index));
	else if (side2 == 3)
		return (check_side2_3(value, index));
	return (0);
}

int	check_side1_1(int value, int index, int side1, int side2)
{
	if (side2 == 2)
	{
		if (index == 0)
			return (value == 4);
		else if (index == 1)
			return (value == 1 || value == 2);
		else if (index == 2)
			return (value == 1 || value == 2);
		else
			return (value == 3);
	}
	else if (side2 == 3)
	{
		if (index == 0)
			return (value == 4);
		else if (index == 1)
			return (value == 1 || value == 2 || value == 3);
		else if (index == 2)
			return (value == 1 || value == 3);
		else
			return (value == 1 || value == 2);
	}
	else if (side2 == 4)
		return (value == (4 - index));
}