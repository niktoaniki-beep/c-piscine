#include<stdio.h>

void ft_swap(int *a , int *b)
{
    int temp = 0;
    
    temp = *a;
    *a = *b;
    *b = temp;
}


int main(void)
{
  int x = 5;
  int y = 10;

  ft_swap(&x, &y);

   printf("a: %d\nb: %d\n", x, y);

  return 0; 
}