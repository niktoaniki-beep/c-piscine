#include<unistd.h>

void ft_print_rectangle(int width, int height)
{
    int l = 0;
    int c;

    while(l < height)
    {
        c = 0;

         while(c < width)
         {
            write(1,"*",1);

           c++; 
         }

         write(1,"\n",1);

        l++; 
    }
}

int main(void)
{
    ft_print_rectangle(5,3);
    return 0;
}