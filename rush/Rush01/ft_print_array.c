#include <unistd.h>

const    int g_num = 4;
const    char g_space = ' ';
const    char g_newline = '\n';

//define os valores de map(falta a lógica)
void    initialize_map(int map[g_num][g_num])
{
    int        i;
    int        j;

    i = 0;
    while (i < g_num){
    	j = 0;
        while (j < g_num)
        {
            map[i][j] = 0;
            j++;
        }
        i++;
    }
}

//imprime os valores de map
void    print_map(int map[g_num][g_num])
{
    int i;
    int j;
    char v;

    i = 0;
    while(i < g_num)
    {
    	j = 0;
        while(j < g_num)
        {
            v = map[i][j] + '0';
            write(1, &v, 1);
            if(j != (g_num - 1))
            {
                write(1, &g_space, 1);
            }
            j++;
        }
        write(1, &g_newline, 1);
        i++;
    }
}

int main()
{
    int map[g_num][g_num];
    initialize_map(map);
    print_map(map);
    return(0);
}