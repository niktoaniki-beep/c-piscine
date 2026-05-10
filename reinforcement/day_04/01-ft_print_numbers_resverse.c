#include<unistd.h>

void ft_print_numbers_reverse(void)
{
    int i = 9;

    while(i >= 0)
    {
        char nb = i + '0';
        write(1, &nb, 1);
        
        if(i != 0)
        {
            write(1,", ",2);
        }
        i--;
    }
}

int main(void)
{
    ft_print_numbers_reverse();
    write(1,"\n",1);
    return 0;
}