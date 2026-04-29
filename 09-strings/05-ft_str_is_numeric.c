#include<stdio.h>

int ft_is_numeric(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(!(str[i] >= '0' && str[i] <= '9'))
        {
            return 0;
        }
      i++;
    }
    return 1;
}


int main(void)
{
    printf("%d\n", ft_is_numeric("1234"));
    printf("%d\n", ft_is_numeric("00123"));
    printf("%d\n", ft_is_numeric("12a3"));

}