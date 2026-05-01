#include<unistd.h>

void ft_print_comb4(void)
{
   int a = 0;
   int b;
   int c;
   int d;

   while(a <= 6)
   {
      b = a + 1;

       while(b <= 7)
       {
          c = b + 1;

           while(c <= 8)
           {
              d = c + 1;
               
               while(d <= 9)
               {
                  char n1 = a + '0';
                  char n2 = b + '0';
                  char n3 = c + '0';
                  char n4 = d + '0';

                  write(1, &n1, 1);
                  write(1, &n2, 1);
                  write(1, &n3, 1);
                  write(1, &n4, 1);

                  if(!(a == 6 && b == 7 && c == 8 && d == 9))
                  {
                     write(1,", ",2);
                  }
                 d++; 
               }
              c++; 
           }
           b++;
       }
      a++; 
   }
}


int main(void)
{
   ft_print_comb4();
   write(1,"\n",1);
   return 0;
}