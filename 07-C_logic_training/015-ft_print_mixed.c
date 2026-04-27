#include<unistd.h>

void ft_print_mixed(void)
{
    int c = 0;

    while(c <= 9)
    {
        char nb = c + '0';
        
           if(c % 2 != 0)
        {
            write(1, &nb, 1);
            write(1, &nb, 1);
        }
        else
        {
            write(1, &nb, 1);
        }

        c++;
    }

    write(1,"\n",1);
}


int main(void)
{
    ft_print_mixed();
    return 0;
}