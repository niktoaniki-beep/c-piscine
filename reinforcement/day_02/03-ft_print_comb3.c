#include<unistd.h>

void ft_print_comb3(void)
{
    int a = 0;
    int b;
    int c;

    while(a <= 7)
    {
        b = a + 1;

        while(b <= 8)
        {
            c = b + 1;

            while(c <= 9)
            {
                char n1 = a + '0';
                char n2 = b + '0';
                char n3 = c + '0';

                write(1, &n1, 1);
                write(1, &n2, 1);
                write(1, &n3, 1);

                 if(!(a == 7 && b == 8 && c == 9))
                 {
                    write(1,", ",2);
                 }
               c++;  
            }
           b++;
        }
      a++;  
    }
}


int main(void)
{
    ft_print_comb3();
    write(1,"\n",1);
    return 0;
}