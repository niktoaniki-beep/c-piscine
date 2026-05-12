#include<unistd.h>

char ft_first_char(char *str)
{
    return (*str);
}

int main(void)
{
    char c = ft_first_char("control");

    write(1, &c, 1);
    write(1,"\n",1);
    return 0;
}

