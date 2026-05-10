#include<stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}


int main (void)
{
    int x = 3;
    int y = 7;

    ft_swap(&x, &y);
    printf("a = %d\nb = %d\n", x, y);

    return 0;

}