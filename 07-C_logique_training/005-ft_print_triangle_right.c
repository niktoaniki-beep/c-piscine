#include <unistd.h>

void ft_print_triangle_right(int n)
{
   int l = 0;
   int s;
   int e;

   while(l < n)
   {
      s = 0;
       
       while(s < (n - l - 1))
       {
         write(1," ",1);
         s++;
       }

      e = 0; 
       
       while(e < (l + 1))
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
    ft_print_triangle_right(4);
    return 0;
}