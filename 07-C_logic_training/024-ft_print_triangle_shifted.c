#include<unistd.h>

void ft_print_triangle_shifted(void)
{
    int l = 0;
    int s = 0;
    int e = 0;
    
    while(l < 5)
    {
        s = 0;

         while(s < (4 - l))
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
    ft_print_triangle_shifted();
    return 0;
}