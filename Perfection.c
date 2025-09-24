#include<stdio.h>

int main()
{
    int number[100];
    int count = 0;

    while(1)
    {
        scanf("%d", &number[count]);
        if(number[count] ==0) break;
        count++;
        if(count >= 100) break;     
    }

    printf("PERFECTION OUTPUT\n");
  
    for(int i=0; i<count; i++)
    {
        int sum = 0;

        for(int j=1; j<number[i]; j++)
        {
            if(number[i]%j == 0)
            {
                sum += j;
            } 
        } 
        printf("%5d  ", number[i]);

        if(sum > number[i])
        {
            printf("ABUNDANT\n");
        }
        else if(sum == number[i])
        {
            printf("PERFECT\n");
        }
        else if(sum < number[i])
        {
            printf("DEFICIENT\n");
        }

    }
    printf("END OF OUTPUT\n");
    return 0;
}