#include<unistd.h>

void ft_strlowcase(char *str)
{
    while(*str)
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        write(1, str, 1);
        str++;
    }
}


int main(void)
{
    char str[] = "CONTROL";

    ft_strlowcase(str);
    write(1,"\n",1);
    
    return 0;
}