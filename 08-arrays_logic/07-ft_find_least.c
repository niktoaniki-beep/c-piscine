#include<unistd.h>
#include<stdio.h>

int ft_find_least(int *arr, int size)
{
    int i = 0;
    int j;
    int count;
    int least = size;

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

        if(count < least)
        {
            least = count;
        }
      i++;  
    }

    return least;
}


int main(void)
{
    int arr[] = {1,2,3,1,2,2,4};
     
      printf("%d\n", ft_find_least(arr, 7));
    
  return 0;
}