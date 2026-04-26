#include<unistd.h>

int ft_isupper(int c)
{
   if(c >= 'A' && c <= 'Z')
   {
      return 1;
   }
   return 0;
}




int main(void)
{
    int result;
    int c = 'e';
    
    result = ft_isupper(c);

    if(result == 1)
    {
        write(1,"YES.\n",5);
    }
     
    else
    {
        write(1,"NO.\n",4);
    } 
    
    return 0;
}