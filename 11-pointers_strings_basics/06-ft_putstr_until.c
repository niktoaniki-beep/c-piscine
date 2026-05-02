#include<unistd.h>

void ft_putstr_until(char *str, char stop)
{
    while(*str && *str != stop)
    {
        write(1, str, 1);
        str++;
    }
}

int main(void)
{
   ft_putstr_until("hello#world", '#');
   write(1,"\n",1);
}