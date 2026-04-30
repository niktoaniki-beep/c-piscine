#include<unistd.h>

void ft_print_even_00_99(void)
{
    int n = 0;
    char f;
    char s;

    while(n <= 99)
    {
        if(n % 2 == 0)
        {
            f = (n / 10) + '0';
            s = (n % 10) + '0';

            write(1, &f, 1);
            write(1, &s, 1);
            
            if(n != 98)
            {
              write(1,", ",2);
            }  
        }
      n++;  
    }
    write(1,"\n",1);
}


int main(void)
{
    ft_print_even_00_99();
    return 0;
}