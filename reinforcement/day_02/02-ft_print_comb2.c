#include<unistd.h>

void ft_print_comb2(void)
{
    int n1 = 0;
    int n2;
    char a;
    char b;
    char c;
    char d;

    while(n1 <= 99)
    {
       n2 = n1 + 1;

       while(n2 <= 99)
       {
            a = (n1 / 10) + '0';
            b = (n1 % 10) + '0';
            c = (n2 / 10) + '0';
            d = (n2 % 10) + '0';

            write(1, &a, 1);
            write(1, &b, 1);
            write(1," ",1);
            write(1, &c, 1);
            write(1, &d, 1);

             if(!(n1 == 98 && n2 == 99))
             {
                write(1,", ",2);
             }  
         n2++; 
       }
      n1++; 
    }
}

int main(void)
{
    ft_print_comb2();
    write(1,"\n",1);
    return 0;
}