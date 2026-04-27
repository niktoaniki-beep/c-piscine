#include<unistd.h>

int main(void)
{
    int nb=5;

    if(nb>0)
    {
        write(1,"positive",8);
        write(1,"\n",1);
    }
    else if(nb<0)
    {
        write(1,"negative",8);
        write(1,"\n",1);
    }
    else
    {
        write(1,"zero",4);
        write(1,"\n",1);
    }

    return 0;
}