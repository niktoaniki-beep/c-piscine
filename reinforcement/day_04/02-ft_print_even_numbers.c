#include<unistd.h>

void ft_print_even_numbers(void)
{
    int i = 0;

    while(i <= 100)
    {
        if(i % 2 == 0)
        {
            if(i < 10)
            {
               char nb = i + '0';
               write(1, &nb, 1);
            }
            
            else if(i == 100)
            {
                write(1,"100",3);
            }

            else
            {
                char nb1 = (i / 10) + '0';
                char nb2 = (i % 10) + '0';

                write(1, &nb1, 1);
                write(1, &nb2, 1);
            }  
            
            if(i != 100)
            {
              write(1,", ",2);
            }
        }
       
      i++;  
    }
}


int main(void)
{
    ft_print_even_numbers();
    write(1,"\n",1);
    return 0;
}