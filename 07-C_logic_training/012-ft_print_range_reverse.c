#include<unistd.h>

void ft_print_range_reverse(int start, int end)
{
    int count;

    count = end;

    while(count >= start)
    {
        char nb = count + '0';

         write(1, &nb, 1);

        count--; 
    }

    write(1,"\n",1);

}


int main(void)
{
    ft_print_range_reverse(6,9);
    return 0;
}