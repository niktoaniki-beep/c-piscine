#include<unistd.h>

int main(void)
{
    char c = 'a';

    while(c <= 'z')
    {
        write(1,&c,1);
        c++;
    }
     
    c = 'A';

    while(c <= 'Z')
    {
        write(1,&c,1);
        c++;
    }

    write(1,"\n",1);
}