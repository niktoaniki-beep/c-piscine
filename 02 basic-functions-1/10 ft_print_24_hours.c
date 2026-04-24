#include<unistd.h>

void ft_print_24_hours(void)
{
    int hours = 0;
    int minutes;

    while(hours <= 23)
    {
        minutes = 0;

        while(minutes <= 59)
        {

            char hd = (hours / 10) + '0';
            char hu = (hours % 10) + '0';
            char md = (minutes / 10) + '0';
            char mu = (minutes % 10) + '0';

              write(1, &hd, 1);
              write(1, &hu, 1);
              write(1,":",1);
              write(1, &md, 1);
              write(1, &mu, 1);
              write(1,"\n",1);
          
          minutes++;

        }
        
        hours++;
        
    }

}

int main(void)
{
    ft_print_24_hours();

   return 0; 
}