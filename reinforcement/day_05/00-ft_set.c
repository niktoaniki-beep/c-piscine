#include<unistd.h>

void ft_set(int *p)
{
    *p =  42;
}

int main(void)
{
    int a = 0;

    ft_set(&a);

    write(1,"a = ",4);
    
    if(a >= 10)
    {
        char n1 = (a / 10) + '0';
        char n2 = (a % 10) + '0';

        write(1, &n1, 1);
        write(1, &n2, 1);
    }
    write(1,"\n",1);

    return 0;
}