#include<unistd.h>

void ft_print_prime_numbers(void)
{
    int i = 2;
    int j = 2;

    while(i <= 50)
    {
        if(j % i != 0);
        {
            if(i < 10)
            {
                char n = i + '0';
                write(1, &n, 1);
            }
            
            else
            {
                char n1 = (i / 10) + '0';
                char n2 = (i % 10) + '0';

                write(1, &n1, 1);
                write(1, &n2, 1);
            }

            if(i != 50)
            {
                write(1,", ",2);
            }
        }
      i++;  
    }
}


int main(void)
{
    ft_print_prime_numbers();
    write(1,"\n",1);
    return 0;
}