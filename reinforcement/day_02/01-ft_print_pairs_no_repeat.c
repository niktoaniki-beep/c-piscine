#include<unistd.h>

void ft_print_pairs_no_repeat(void)
{
    int i = 0;
    int j;
    char d1;
    char d2;
      
    while(i <= 8)
    {
        j = 0;

         while(j <= 9)
         {
             if(i < j)
             {
                d1 = i + '0';
                d2 = j + '0';
                write(1, &d1, 1);
                write(1, &d2, 1);

                if(!(i == 8 && j == 9))
                {
                  write(1,", ",2);
                }
             }
           j++;  
        }
      i++;  
    } 
}


int main(void)
{
    ft_print_pairs_no_repeat();
    write(1,"\n",1);
    return 0;
}