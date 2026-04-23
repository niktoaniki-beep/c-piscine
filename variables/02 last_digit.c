#include<unistd.h>
#include<stdio.h>

int main(void)
{
    int nb=123;

    if(nb<0)
    {
        nb = -nb;
    }
    nb = nb % 10;

    printf("nb: %d\n", nb);

    return 0;
}