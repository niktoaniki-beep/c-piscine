#include<unistd.h>

void ft_print_unique(int *arr, int size)
{
    int i = 0;
    int j;
    int count;
    char un;

    while(i < size)
    {
        j = 0;
        count = 0;

        while(j < size)
        {
            if(arr[i] == arr[j])
            {
               count++;
            }
           j++; 
        }
            if(count == 1)
            {
               un = arr[i] + '0';
               write(1,&un,1);
               write(1," ",1);
            }
      i++; 
    }
   write(1,"\n",1); 
}


int main(void)
{
    int arr[] = {1,3,2,4,2,1,5};

     ft_print_unique(arr, 7);

   return 0; 
}