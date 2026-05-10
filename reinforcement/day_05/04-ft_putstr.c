#include<unistd.h>

void ft_putstr(char *str)
{
    int count = 0;

    while(str[count] != '\0')
    {
        write(1, &str[count], 1);
        count++;
    }
}


int main(void)
{
    ft_putstr("control");
    write(1,"\n",1);

    return 0;
}