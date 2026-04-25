#include<unistd.h>

int ft_array_sum(int *tab, int size)
{
    int i = 0;
    int sum = 0;

    while(i < size)
    {
        sum = sum + tab[i];
        
      i++;
    }
    
    return sum;
}