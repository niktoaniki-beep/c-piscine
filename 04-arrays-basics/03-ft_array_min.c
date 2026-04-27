#include<unistd.h>

int ft_array_min(int *tab, int size)
{
    int i = 0;
    int min;

    min = tab[0];

    while(i < size)
    {
        if(tab[i] < min)
        {
            min = tab[i];
        }
       
      i++;

    }
  
    return min;
}