#include<unistd.h>

void ft_print_least_frenquent(int *arr, int size)
{
   int i = 0;
   int j;
   int count;
   int least = size;
   int seen = 0;
   char lf;

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

   i = 0;

   while(i < size)
   {
     j = 0;
     seen = 0;
      
       while(j < i)
       {
          if(arr[i] == arr[j])
          {
            seen = 1;
          }
          j++;
       }
       
       count = 0;
       j = 0;
             
             while(j < size)
             {
                if(arr[i] == arr[j])
                {
                    count++;
                }
                j++;
             }

             if(seen == 0 && count == least)
             {
                lf = arr[i] + '0';
                write(1, &lf, 1);
                write(1," ",1);
             }
        
      i++;
   }

    write(1,"\n",1);
}


int main(void)
{
    int arr[] = {1,2,3,2,1,4,6};

      ft_print_least_frenquent(arr, 7);

    return 0;  
}