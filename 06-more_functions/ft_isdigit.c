#include<unistd.h>

int ft_isdigit(int c)
{
    if(c >= '0' && c <= '9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main(void)
{
    int c = '3';
    int result;

    result = ft_isdigit(c);

    if(result == 1)
    {
        write(1,"YES.\n",5);
    }
    else 
    {
        write(1,"NO\n",3);
    }

  return 0;
}