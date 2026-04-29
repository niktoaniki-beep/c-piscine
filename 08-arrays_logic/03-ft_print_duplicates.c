#include<unistd.h>

void ft_print_duplicates(int *arr, int size)
{
    int i = 0;
    int j;
    char dup;

    while(i < size)
    {
        j = 0;
        
        while(j < i)
        {
            if((arr[i] == arr[j]) && i != j)
            {
                dup = arr[j] + '0';

                   write(1, &dup, 1);
                   write(1," ",1);
            }
            j++;
        }
      i++;
    }
   write(1,"\n",1);
    
}



int main(void)
{
    int arr[] = {1,5,3,2,1,4,5};

      ft_print_duplicates(arr,7);

     return 0; 
}