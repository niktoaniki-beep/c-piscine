#include<unistd.h>

void ft_print_even_above_avg(int *arr, int size)
{
    int i = 0;
    int sum = 0;
    int avg;
    
    while(i < size)
    {
        sum = sum + arr[i];
        i++;
    }

    i = 0;
    avg = sum / size;

    while(i < size)
    {
        if((arr[i] > avg) && (arr[i] % 2 == 0))
        {
            char nb = arr[i] + '0';

            write(1, &nb, 1);
            write(1," ",1);
        }
        i++;
    }
    write(1,"\n",1); 
}


int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    ft_print_even_above_avg(arr,6);

   return 0; 
}