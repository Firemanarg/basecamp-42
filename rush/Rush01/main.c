#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	decode_box_views_string(int box_views[4][4], char *str);
int	str_is_valid(char *str);
void    print_map(int map[4][4]);

int	main(int argc, char **argv)
{
	char	*str;// = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	char	*c;
	int	box_views[4][4];

	str = argv[1];
	printf("%i\n", decode_box_views_string(box_views, str));
	print_map(box_views);
}

void    print_map(int map[4][4])
{
    int i;
    int j;
    char v;

    i = 0;
    while(i < 4)
    {
    	j = 0;
        while(j < 4)
        {
            v = map[i][j] + '0';
            write(1, &v, 1);
            if(j != 3)
                write(1, " ", 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}