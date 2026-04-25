#include<unistd.h>

int ft_array_max(int *tab, int size)
{
    int i = 0;
    int max;

    max = tab[0];

    while(i < size)
    {
        if(tab[i] > max)
        {
            max = tab[i];
        }
      i++; 
    }
    return max;
}