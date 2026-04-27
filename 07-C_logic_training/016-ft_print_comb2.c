#include<unistd.h>

void ft_print_comb2(void)
{
    int n1 = 0;
    int n2;

    while(n1 <= 9)
    {
        n2 = n1 + 1;

         while(n2 <= 9)
         {
            char nb1 = n1 + '0';
            char nb2 = n2 + '0';

            write(1, &nb1, 1);
            write(1, &nb2, 1);

             if(n1 != 8 || n2 != 9)
             {
                write(1,", ",2);
             }

             n2++;
         }
         
         n1++;
    }

    write(1,"\n",1);

}


int main(void)
{
    ft_print_comb2();
    return 0;
}