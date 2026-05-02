#include<unistd.h>

void ft_print_numbers_skip_3(void)
{
    int i = 0;
    char c;

    while(i <= 100)
    {
        if(i / 10 == 3 || i % 10 == 3)
        {
            write(1,"X",1);
        }
        else
        {
            if(i < 10)
            {
                c = i + '0';
                write(1, &c, 1);
            }
            
            else if(i == 100)
            {
                write(1,"100",3);
            }

            else
            {
                c = (i / 10) + '0';
                write(1, &c, 1);
                c = (i % 10) + '0';
                write(1, &c, 1);
            }
        }
        write(1,"\n",1);
      i++;  
    }
}

int main(void)
{
    ft_print_numbers_skip_3();
    return 0;
}