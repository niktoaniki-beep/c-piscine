#include<unistd.h>

void ft_pointers_basic(void)
{
    int a = 10;
    int *p;
    
    p = &a;

    if(*p < 10)
    {
     char c = *p + '0';
     write(1, &c, 1);
    }
     
        char n1 = (*p / 10) + '0';
        char n2 = (*p % 10) + '0';

        write(1, &n1, 1);
        write(1, &n2, 1);
     
}

int main(void)
{
    ft_pointers_basic();
    write(1,"\n",1);
    return 0;
}