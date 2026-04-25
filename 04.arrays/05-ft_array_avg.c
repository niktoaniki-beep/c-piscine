#include<unistd.h>

int ft_array_avg(int *tab, int size)
{
    int i = 0;
    int sum = 0;

    if(size == 0)
    {
        return 0;
    }
      while(i < size)
      {
          sum = sum + tab[i];

        i++; 
      }
   
   return (sum / size);  
}