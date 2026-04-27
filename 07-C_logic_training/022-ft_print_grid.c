#include<unistd.h>

void ft_print_grid(void)
{
    int l = 0;
    int c;
    char nb;

    while(l <= 4)
    {
        c = 0;

         while(c <= 4)
         {
            nb = c + '0';

            write(1, &nb, 1);
            write(1," ",1);
            c++;
         }
         write(1,"\n",1);
         l++;
    }
}


int main(void)
{
    ft_print_grid();
    return 0;
}