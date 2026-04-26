#include<unistd.h>

int ft_isalpha(int c)
{
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
    int c = 'r';
    int result;

    result = ft_isalpha(c);

    if(result == 1)
    {
        write(1,"YES.\n",5);
    }
    else
    {
        write(1,"NO.\n",4);
    }

   return 0; 
}