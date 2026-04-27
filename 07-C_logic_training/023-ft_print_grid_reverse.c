#include<unistd.h>

void ft_print_grid_reverse(void)
{
    int l = 0;
    int c;
    char nb;

    while(l <= 4)
    {
        c = 4;
         
         while(c >= 0)
         {
            nb = c + '0';
            write(1, &nb, 1);
            c--;
         }
         write(1,"\n",1);
         l++;
    }
}


int main(void)
{
    ft_print_grid_reverse();
    return 0;
}