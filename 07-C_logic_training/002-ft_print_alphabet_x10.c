#include<unistd.h>

void ft_print_alphax10(void)
{
    int count = 0;
    char al;

    while(count < 10)
    {
        al = 'a';

        while(al <= 'z')
        {
            write(1, &al, 1);
            al++;
        }
        write(1,"\n",1);
        count++;
    }
}


int main(void)
{
    ft_print_alphax10();
    return 0;
}