#include<unistd.h>

void ft_print_0_to_50_special(void)
{
    int nb = 0;

    while(nb <= 50)
    {
         if((nb != 0) && (nb % 5 == 0))
        {
            write(1,"X",1);
        }
        
          else
          {
              char f = (nb / 10) + '0';
              char s = (nb % 10) + '0';

              write(1, &f, 1);
              write(1, &s, 1);
          }
          
           if(nb != 50)
           {
             write(1," ",1);
           }

        nb++;   
    }

   write(1,"\n",1); 
}


int main(void)
{
    ft_print_0_to_50_special();
    return 0;
}