#include<unistd.h>

char ft_second_char(char *str)
{
    return *(str + 1);
}

int main(void)
{
    char c;

    c = ft_second_char("hello");

    write(1, &c, 1);
    write(1,"\n",1);

   return 0; 
}