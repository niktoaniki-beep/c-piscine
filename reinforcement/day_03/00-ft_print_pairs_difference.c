#include<unistd.h>

void ft_print_pairs_diff_3(void)
{
    int i = 0;
    int j;

    while(i <= 9)
    {
        j = 0;

        while(j <= 9)
        {
            if(i < j && (j - i == 3))
            {
                char d1 = i + '0';
                char d2 = j + '0';

                write(1, &d1, 1);
                write(1, &d2, 1);

                if(i != 6 && j != 9)
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
    ft_print_pairs_diff_3();
    write(1,"\n",1);
    return 0;
}