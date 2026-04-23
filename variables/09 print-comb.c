#include<unistd.h>

int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;

    while(a <= 7)
    {
        b = a + 1;

        while(b <= 8)
        {
            c = b + 1;

            while(c <= 9)
            {
               
               char d = a + '0';
               char e = b + '0';
               char f = c + '0';

               write(1,&d,1);
               write(1,&e,1);
               write(1,&f,1);
                
               if(!(a == 7 && b == 8 && c == 9))
                {
                    write(1,", ",2);
                }
                
                
               c++;
            }
           b++; 
        }
       a++; 
    }
    
    write(1,"\n",1);

  return 0;  
}