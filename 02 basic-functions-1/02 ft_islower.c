#include<unistd.h>

int ft_islower(char c)
{
    if(c >= 'a' && c <= 'z')
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
    char c = 'r';
    int result;

    result = ft_islower(c);

  return 0;

}