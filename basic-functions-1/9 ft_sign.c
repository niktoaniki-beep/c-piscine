#include<unistd.h>

int ft_sign(int n)
{
    if(n > 0)
    {
        return 1;
    }
    else if(n == 0)
    {
        return 0;
    }
    else 
    {
        return -1;
    }
}

int main(void)
{
    int c = 0;
    int result = ft_sign(c);

  return 0;  
}