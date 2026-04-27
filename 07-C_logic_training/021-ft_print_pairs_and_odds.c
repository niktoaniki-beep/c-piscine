#include<unistd.h>

void ft_print_pairs_and_odds(void)
{
    int n = 0;
    char even;
    
    while(n <= 9)
    {
        if(n % 2 == 0)
        {
             even = n + '0';
             
             write(1, &even, 1);
        }
       n++; 
    }

    n = 0;

    while(n <= 9)
    {
        if(n % 2 != 0)
        {
            char odd = n + '0';

            write(1, &odd, 1);
        }
        n++;
    }
    write(1,"\n",1);

}


int main(void)
{
    ft_print_pairs_and_odds();
    return 0;
}