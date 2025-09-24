#include<stdio.h>
#include<stdlib.h>

int main()
{
    int total;
    scanf("%d", &total);

    for(int i = 0 ; i < total ; i++)
    {   
        int number;
        scanf("%d", &number);
        int arr[number];
        for(int j = 0 ; j < number ; j++)
        {
            scanf("%d", &arr[j]);
        }
        
        for(int a = 0 ; a < number ; a++)
        {
            for(int b = a+1 ; b < number ; b++)
            {
                if(arr[a] > arr[b])
                {
                    int temp = arr[a] ;
                    arr[a] = arr[b];
                    arr[b] = temp;       
                }
            }
        }

        int sum = 0;
        int median = arr[number/2];
        for(int i = 0 ; i < number ; i++)
        { 
            sum += abs(arr[i] - median); 
        }
        printf("%d\n", sum);   
    }
}