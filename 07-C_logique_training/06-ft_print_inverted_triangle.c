#include<unistd.h>

void ft_print_inverted_triangle(int n)
{
    int l = 0;
    int s;
    int e;

    while(l < n)
    {   
        s = 0;

         while(s < l)
         {
            write(1," ",1);
            s++;
         }

        e = 0;
        
         while(e < (n - l))
         {
            write(1,"*",1);
            e++;
         }

          write(1,"\n",1);
          l++;
    }
}


int main(void)
{
    ft_print_inverted_triangle(4);
    return 0;
}