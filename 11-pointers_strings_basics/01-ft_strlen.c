#include<unistd.h>
#include<stdio.h>

int ft_strlen(char *str)
{
    int len = 0;

    while(*str)
    {
        len++;
        str++;
    }
    return len;
}

int main(void)
{
    printf("len = %d\n", ft_strlen("hello"));
    return 0;
}