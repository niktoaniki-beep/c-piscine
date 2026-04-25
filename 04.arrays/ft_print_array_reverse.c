#include<unistd.h>

void ft_print_array_reverse(int *tab, int size)
{
    int i;
    i = size - 1;

      while(i >= 0)
      {
        char c = tab[i] + '0';
        
          write(1, &c, 1);

         i--; 
      }
    write(1,"\n",1);  
}