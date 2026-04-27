#include<unistd.h>

int ft_print_last_digit(int n)
{
    if(n < 0)
    {
        n = -n;
    }
    n = n % 10;
    
    char c = n + '0';

   write(1, &c, 1); 

  return n; 
}

int main(void)
{
    int nb = 3301;
    int result = ft_print_last_digit(nb);
    
    write(1,"\n",1);
    
   return 0; 
}