#include<unistd.h>

void ft_strupcase(char *str)
{
    while(*str)
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        write(1, str, 1);
       str++; 
    }
}


int main(void)
{
    char str[] = "control";

    ft_strupcase(str);
    write(1,"\n",1);

    return 0;
}