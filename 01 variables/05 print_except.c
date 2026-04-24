#include<unistd.h>

int main(void)
{
    char c = 'a';

    while(c <= 'z')
    {
        if(c != 'e' && c != 'q')
        {
            write(1,&c,1);
        }
         c++;
    }

     write(1,"\n",1);

  return 0;
}