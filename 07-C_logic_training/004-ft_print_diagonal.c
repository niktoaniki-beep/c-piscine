#include<unistd.h>

void ft_print_diagonal(int n)
{
    int l = 0;
    int c;

    while(l < n)
    {
        c = 0;

         while(c < l)
         {
            write(1," ",1);
            c++;
         }
         write(1,"\\",1);
         write(1,"\n",1);
         l++;
    }
}


int main(void)
{
    ft_print_diagonal(4);
    return 0;
}