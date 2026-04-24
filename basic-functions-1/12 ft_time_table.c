#include<unistd.h>

void ft_time_table(void)
{
    int a = 0;
    int b;
    int result;

    while(a <= 9)
    {
        b = 0;

        while(b <= 9)
        {
            result = a * b;

            char c = a + '0';
            char d = b + '0';

            write(1, &c, 1);
            write(1,"*",1);
            write(1, &d, 1);
            write(1,"=",1);

             if (result >= 10)
            {
                char r1 = (result / 10) + '0';
                char r2 = (result % 10) + '0';
                write(1, &r1, 1);
                write(1, &r2, 1);
            }
            else
            {
                char r = result + '0';
                write(1, &r, 1);
            }

            write(1,"\n",1);

           b++; 
        }
      a++;
    }
}

int main(void)
{
    ft_time_table();
    return 0;
}