#include<unistd.h>

void ft_print_number(int n)
{
    char d;

        if(n >= 10)
        {
            ft_print_number(n / 10);
        }
       
     d = (n % 10) + '0';
     write(1, &d, 1);
          
}

int main(void)
{
    ft_print_number(331);
    write(1,"\n",1);
    return 0;
}