#include<unistd.h>

int ft_islower(int c)
{
    if(c >= 'a' && c <= 'z')
    {
        return 1;
    }
    return 0;
}


int main(void)
{
    int c = 'D';
    int result = ft_islower(c);

    if(result == 1)
    {
        write(1,"lower\n",6);
    }
    else
    {
        write(1,"upper\n",6);
    }
    return 0;
}