#include <unistd.h>

void ft_print_to_98(int n)
{
    char c;

    while (n != 98)
    {
        int temp = n;

        if (temp < 0)
        {
            write(1, "-", 1);
            temp = -temp;
        }

        if (temp >= 10)
        {
            c = (temp / 10) + '0';
            write(1, &c, 1);
        }

        c = (temp % 10) + '0';
        write(1, &c, 1);

        write(1, ", ", 2);

        if (n < 98)
            n++;
        else
            n--;
    }

    write(1, "98\n", 3);
}

int main(void)
{
  
   ft_print_to_98(1);
   
  return 0;

}