#include<unistd.h>

void ft_print_grid_skip(void)
{
    int l = 0;
    int c;
    char nb1;
    char nb2;

    while(l <= 2)
    {
        c = 0;

         while(c <= 2)
         {
            if((c + l) % 2 != 0)
            {
                nb1 = l + '0';
                nb2 = c + '0';

                write(1, &nb1, 1);
                write(1, &nb2, 1);
                write(1," ",1);
            }
    
            c++;
         }
        
         write(1,"\n",1);
        l++; 
    }
}


int main(void)
{
    ft_print_grid_skip();
    return 0;
}