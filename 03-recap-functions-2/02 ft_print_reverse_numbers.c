#include<unistd.h>

void ft_print_reverse_numbers(void)
{
    int nb = 9;

    while(nb >= 0)
    {
        char n = nb + '0';

          write(1, &n, 1);

         nb--;
    }

   write(1,"\n",1);

}

int main(void)
{
    ft_print_reverse_numbers();
    return 0;
}