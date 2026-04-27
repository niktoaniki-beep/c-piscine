#include<unistd.h>

void ft_print_99_to_00(void)
{
    int nb = 99;

    while(nb >= 0)
    {
        char f = (nb / 10) + '0';
        char s = (nb % 10) + '0';

        write(1, &f, 1);
        write(1, &s, 1);

          if(nb != 0)
          {
             write(1," ",1);
          }

       nb--;   
    }

   write(1,"\n",1); 
}


int main(void)
{
    ft_print_99_to_00();
    return 0;
}