#include<unistd.h>

void ft_print_range(int start, int end)
{
    
    int count;

    count = start;

    while(count <= end)
    {
        char nb = count + '0';

          write(1, &nb, 1);

          count++;

    }

    write(1,"\n",1);

}

int main(void)
{
    ft_print_range(6,9);
    return 0;
}
