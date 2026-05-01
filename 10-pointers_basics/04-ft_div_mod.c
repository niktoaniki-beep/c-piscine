#include<stdio.h>

void ft_div_mod(int a, int b, int *div , int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main(void)
{
    int di;
    int mo;

    ft_div_mod(10, 3, &di, &mo);

    printf("div = %d\n", di);
    printf("mod = %d\n", mo);

  return 0;  
}