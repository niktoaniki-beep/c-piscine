#include<unistd.h>

void ft_print_array(int *tab, int size)
{
    int i = 0;

    while(i < size)
    {
        char c = tab[i] + '0';

          write(1, &c, 1);

       i++;   
    }

   write(1,"\n",1);

}
