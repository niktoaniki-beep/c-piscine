#include<unistd.h>

void ft_print_alphabet_x10(void)
{
    int round = 0;
    char c = 'a';

    while(round < 10)
    {
        while(c <= 'z')
        {
            write(1, &c, 1);
           c++; 
        }
        c = 'a';

         write(1,"\n",1);
        
     round++; 
    }
}