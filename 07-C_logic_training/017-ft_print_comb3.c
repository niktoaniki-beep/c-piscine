#include<unistd.h>

void ft_print_comb3(void)
{
    int n1 = 0;
    int n2;
    int n3;
    
    while(n1 <= 7)
    {
        n2 = n1 + 1;

         while(n2 <= 8)
         {
            n3 = n2 + 1;

             while(n3 <= 9)
             {
                char nb1 = n1 + '0';
                char nb2 = n2 + '0';
                char nb3 = n3 + '0';

                write(1, &nb1, 1);
                write(1, &nb2, 1);
                write(1, &nb3, 1);

                 if(n1 != 7 || n2 != 8 || n3 != 9)
                 {
                    write(1,", ",2);
                 } 

                n3++; 
             }
             n2++;
         }
         n1++;
    }

    write(1,"\n",1);
}


int main(void)
{
    ft_print_comb3();
    return 0;
}