#include<unistd.h>

void ft_print_numbers_x10(void)
{
    int nb;
    int count = 0;

    while(count < 10)
    {
        nb = 0;
        
        while(nb <= 9)
        {
            char n = nb + '0';

            write(1, &n, 1);
            nb++;
        }
        write(1,"\n",1);
        count++;
    }
}


int main(void)
{
    ft_print_numbers_x10();
    return 0;
}