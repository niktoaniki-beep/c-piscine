#include<unistd.h>
#include<stdio.h>


int ft_atoi(char *str)
{
    int result;
    result = 0;

    while(*str)
    {
       result = result * 10 + (*str - '0');
       str++;
    }
    return (result);
}


int main(void)
{
   printf("%d\n", ft_atoi("321"));
   
    return 0;
}
