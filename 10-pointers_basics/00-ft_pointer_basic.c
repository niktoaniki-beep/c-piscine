#include<stdio.h>

void ft_pointer_basic(void)
{
    int a = 5;
    int *p;

       p = &a;

        printf("a = %d\n", a);
        printf("p = %p\n", *p);
        printf("adress of a = %p\n", &a);

       *p = 20;
       
        printf("a after modif = %d\n", a);
}

int main(void)
{
   ft_pointer_basic();
   return 0;
}