#include<unistd.h>

int ft_tolower(int c)
{
    if(c >= 'A' && c <= 'Z')
    {
        return (c + 32);
    }
    else
    {
        return c;
    }
}


int main(void)
{
    int c = 'C';
    int result;

    result = ft_tolower(c);

    write(1,&result,1);
    write(1,"\n",1);

    return 0;


}