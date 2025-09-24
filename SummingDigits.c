#include<stdio.h>
#include<stdlib.h>

int digitsum(int n)
{
    int result = 0;
    while(n>0)
    {
        result += n % 10;
        n /= 10;
    }
    return result;
} 

int main()
{
	char ar1[11];
	int sum=0;
    while(1)
    {
        scanf("%10s",ar1);
        if(ar1[0] == '0' && ar1[1] == '\0')
        {
            break;
        }
        sum = 0;
	    for(int i=0;ar1[i]!='\0';i++)
	    {
		    sum += ar1[i] - '0';	
	    }
    
        while(sum>=10)
        {
            sum = digitsum(sum);
        }    
        printf("%d\n", sum);  
    }
    
}
