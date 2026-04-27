#include<unistd.h>

int ft_abs(int n)
{
    if(n > 0)
    {
        return n;
    }
    else if(n < 0)
    {
        return -n;
    }
    else 
    {
        return 0;
    }
}

int main(void)
{
    int nb = 3301;
    int result = ft_abs(nb);

  return 0;  
}