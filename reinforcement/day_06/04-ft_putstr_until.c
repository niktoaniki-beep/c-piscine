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
    ft_putstr_until("theone#incontrol", '#');
    write(1,"\n",1);
    return 0;
}