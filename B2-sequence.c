#include <stdio.h>

int main()
{
    int b2[100], n, t = 1;
    int sums[20000];
    int sum_count;
    int is_b2;

    while (scanf("%d",&n) == 1)
    {
        is_b2 = 1;
        sum_count = 0;
        
        for(int i=0; i<n; i++)
        {
            scanf("%d", &b2[i]);
        }

        if(b2[0]!=1) //確認第一項是1
        {
            is_b2 = 0;
        }
        
        for(int i=0; i<n; i++)
        {
            if(b2[i]<=0)
            {
                is_b2 = 0;
            }
        }

        for(int i=0; i<n; i++)
        {
            if(b2[i] <= b2[i-1])   //確認前項不比後項大
            {
                is_b2 = 0;
            }
        }

        if(is_b2)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=i; j<n; j++)
                {
                    int current_sum = b2[i] + b2[j];
                    
                    for(int k=0; k<sum_count; k++)
                    {
                        if(sums[k] == current_sum)
                        {
                            is_b2 = 0;
                            break;
                        }

                    }
                    if(!is_b2) break;
                    sums[sum_count++] = current_sum;
                }
                if(!is_b2) break;        
            }
        }

        if(is_b2)  
        {
            printf("Case #%d: It is a B2-Sequence.\n\n", t++);
        }
        else 
        {
            printf("Case #%d: It is not a B2-Sequence.\n\n", t++);
        }
    }
    
    return 0;
}