#include<unistd.h>

int ft_count_char(char *str, char c)
{
    int count = 0;

    while(*str)
    {
        if(*str == c)
        {
          count++;
        }  
        str++;
    }
    return count;
}

int main(void)
{
    int n;
    char c;

    n = ft_count_char("hello", 'o');
    c = n + '0';

    write(1, &c, 1);
    write(1,"\n",1);

  return 0;  
}