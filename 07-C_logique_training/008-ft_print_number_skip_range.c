#include<unistd.h>

void ft_print_numbers_skip_range(void)
{
    int c = 0;

    while(c <= 9)
    {
        if(c < 3 || c > 6)
        {
            char n = c + '0';

            write(1, &n, 1);
        }
        c++;
    }
    write(1,"\n",1);
}


int main(void)
{
    ft_print_numbers_skip_range();
    return 0;
}