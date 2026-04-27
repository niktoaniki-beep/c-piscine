#include<unistd.h>

void ft_print_odd_numbers(void)
{
    int nb = 0;

    while(nb <= 9)
    {
        if(nb % 2 != 0)
        {
            char n = nb + '0';

              write(1, &n, 1);
        }

       nb++; 
    }

   write(1,"\n",1); 
}


int main(void)
{
    ft_print_odd_numbers();
    return 0;
}