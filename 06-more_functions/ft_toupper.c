#include<unistd.h>

int ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z')
    {
        return (c - 32);
    }
    else
    {
        return c;
    }
}

int main(void)
{
    int c = 'v';
    int result;

    result = ft_toupper(c);

    write(1,&result,1);
    write(1,"\n",1);

    return 0;
}