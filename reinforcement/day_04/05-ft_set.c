#include<stdio.h>

void ft_set(int *p)
{
    *p = 3301;
}

int main(void)
{
    int a = 0;

    ft_set(&a);
    
    printf("a = %d\n", a);

    return 0;

}