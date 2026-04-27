#include<unistd.h>

void ft_print_pattern(int n)
{
    int l = 0;
    int c;
    int count = 0;

    while(l < n)
    {
        c = 0;

         while(c <= l)
         {
            if(count <= 9)
            {
                char nb = count + '0';
                
                write(1, &nb, 1);
                
                count++;
            }
            
               else if(count >= 10)
              {
                 char d1 = (count / 10) + '0';
                 char d2 = (count % 10) + '0';

                 write(1, &d1, 1);
                 write(1, &d2, 1);
                
                 count++;
              }
            
            c++;
         }
         write(1,"\n",1);
         l++;
    }
}


int main(void)
{
    ft_print_pattern(6);
    return 0;
}