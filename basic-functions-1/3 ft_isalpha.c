#include<unistd.h>

int ft_isalpha(char c)
{
    if((c >= 'a' && c<='z') || (c >= 'A' && c <= 'Z'))
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
    char c = 'g';
    int result = ft_isalpha(c);

  return 0;  
}