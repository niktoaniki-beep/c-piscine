#include<unistd.h>

void ft_print_reverse_number(int n)
{
    int temp;

      temp = n;
    
       if(temp < 0)
       {
          write(1,"-",1);
          temp = -temp;
       }
           while(temp > 0)
           {
             char last = (temp % 10) + '0';
              temp = temp / 10;

               write(1, &last, 1);
           }

          if(n == 0)
          {
             write(1,"0",1);
          }
     
     write(1,"\n",1);

}


int main(void)
{
    ft_print_reverse_number(3301);
    return 0;
}