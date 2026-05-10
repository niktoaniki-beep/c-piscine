#include<unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main(void)
{
    int div;
    int mod;

    ft_div_mod(10, 3, &div, &mod);

    char di = div + '0';
    char mo = mod + '0';

    write(1,"div : ",6);
    write(1, &di, 1);

    write(1,"\n",1);

    write(1,"mod : ",6);
    write(1, &mo, 1);

    write(1,"\n",1);

    return 0;
}