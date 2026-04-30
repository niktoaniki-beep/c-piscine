#include<unistd.h>

void ft_print_not_unique(int *arr, int size)
{
    int i = 0;
    int j;
    int seen;
    int count;

    while(i < size)
    {
        j = 0;
        seen = 0;

         while(j < i)
         {
            if(arr [i] == arr[j])
            {
                seen = 1;
            }
           j++; 
         }

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

         if(seen == 0 && count > 1)
         {
            char nb = arr[i] + '0';
            write(1, &nb, 1);
            write(1," ",1);
         }
        i++;
    }
}


int main(void)
{
    int arr[] = {1,2,3,1,2,4,5};

      ft_print_not_unique(arr, 7);

       write(1,"\n",1);

    return 0; 
}