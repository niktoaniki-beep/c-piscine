#include<unistd.h>

void ft_print_pairs_even_sum(void)
{
    int i = 0;
    int j;

    while(i <= 9)
    {
        j = 0;

        while(j <= 9)
        {
            if(i < j && (i + j) % 2 == 0)
            {
                char n1 = i + '0';
                char n2 = j + '0';
                write(1, &n1, 1);
                write(1, &n2, 1);
                
                if(!(i == 7 && j == 9))
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
    ft_print_pairs_even_sum();
    write(1,"\n",1);
    return 0;
}