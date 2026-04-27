#include<unistd.h>

void ft_print_00_to_99(void)
{
    int nb = 0;

    while(nb <= 99)
    {
       char f = (nb / 10) + '0';
       char s = (nb % 10) + '0';
       
       write(1, &f, 1);
       write(1, &s, 1);

         if(nb != 99)
         {
            write(1," ",1);
         }
       nb++;  
    }
  
   write(1,"\n",1); 
}


int main(void)
{
    ft_print_00_to_99();
    return 0;
}