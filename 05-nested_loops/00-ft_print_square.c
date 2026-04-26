#include<unistd.h>

void ft_print_square(int n)
{
    int i = 0;
    int j;
    
    while(i < n)
    {
        j = 0;

        while(j < n)
        {
            write(1,"*",1);
            j++;
        }
        
        write(1,"\n",1);
        i++;
    }
}

int main(void)
{
    ft_print_square(4);
    return 0;
}