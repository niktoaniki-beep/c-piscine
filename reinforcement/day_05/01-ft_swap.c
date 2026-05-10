#include<unistd.h>

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x = 7;
    int y = 3;

    ft_swap(&x, &y);

    char n1 = x + '0';
    char n2 = y + '0';

    write(1,"a = ",4);
    write(1, &n1, 1);
    
    write(1,"\n",1);
    
    write(1,"b = ",4);
    write(1, &n2, 1);
    
    write(1,"\n",1);

    return 0;
}