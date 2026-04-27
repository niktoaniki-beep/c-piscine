#include<unistd.h>

void ft_print_pairs(void)
{
    int n1 = 0;
    int n2;
    char nb1;
    char nb2;

    while(n1 <= 9)
    {
        n2 = 0;

         while(n2 <= 9)
         {
            if(n1 % 2 == 0 && n2 % 2 == 0)
            {
                nb1 = n1 + '0';
                nb2 = n2 + '0';

                write(1, &nb1, 1);
                write(1, &nb2, 1);

                  if(!(n1 == 8 && n2 == 8))
                  {
                     write(1,", ",2);
                  }
            }
            n2++;
         }
         n1++;
    }

    write(1,"\n",1);
}


int main(void)
{
    ft_print_pairs();
    return 0;
}