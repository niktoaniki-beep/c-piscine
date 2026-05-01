#include<unistd.h>

void ft_print_mirror_pairs(void)
{
    int i = 1;


    while(i <= 9)
    {
          char n1 = i  + '0';

          write(1,"0", 1);
          write(1, &n1, 1);

          write(1," ",1);
          
          write(1, &n1, 1);
          write(1, "0", 1);
          
          if(i != 9)
          {
            write(1,"\n",1);
          }    
      i++;  
    }
}


int main(void)
{
    ft_print_mirror_pairs();
    write(1,"\n",1);
    return 0;
}