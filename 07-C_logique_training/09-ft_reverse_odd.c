#include<unistd.h>

void ft_reverse_skip_odd(void)
{
    int c = 9;

    while(c >= 0)
    {
        if(c % 2 != 0)
        {
            char n = c + '0';

            write(1, &n, 1);
        }
        c--;
    }
    write(1,"0",1);
    write(1,"\n",1);
}


int main(void)
{
    ft_reverse_skip_odd();
    return 0;
}