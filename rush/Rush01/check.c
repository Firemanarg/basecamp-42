int	check_side2_1(int value, int index)
{
	if (index == 0)
		return (value == 3);
	else if (index == 1)
		return (value == 1 || value == 2);
	else if (index == 2)
		return (value == 1 || value == 2);
	else
		return (value == 4);
}

int	check_side2_2(int value, int index)
{
	if (index == 0)
		return (value == 1 || value == 2 || value == 3);
	else if (index == 1)
		return (value == 1 || value == 2 || value == 4);
	else if (index == 2)
		return (value == 1 || value == 2 || value == 4);
	else
		return (value == 1 || value == 2 || value == 3);
}

int	check_side2_3(int value, int index)
{
	if (index == 0)
		return (value == 1 || value == 2 || value == 3);
	else if (index == 1)
		return (value == 4);
	else if (index == 2)
		return (value == 2 || value == 3);
	else
		return (value == 1 || value == 2);
}