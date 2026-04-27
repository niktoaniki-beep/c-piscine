#include<unistd.h>

void ft_print_range_skip_even(int start, int end)
{
    int count;

    count = start;

    while(count <= end)
    {
        if(count % 2 != 0)
        {
            char nb = count + '0';

             write(1, &nb, 1);
             
        }
        
        count++;
    }
    
    write(1,"\n",1);
}


int main(void)
{
    ft_print_range_skip_even(0,7);
    return 0;
}