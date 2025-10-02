#include<stdio.h>
#include<string.h>

int main()
{
    char num[1005];
    while((scanf("%s", &num)) == 1)
    {
        if(strcmp(num, "0") == 0) break;

        //"0" → {'0','\0'} 
        //'0' → single char

        int mod = 0;

        for(int i = 0; num[i]; i++)
        {
            int digit = num[i] - '0';
            mod = (mod * 10 + digit) % 11;
        }

        if(mod == 0)
        {
            printf("%s is a multiple of 11.\n", num);
        }
        else
        {
            printf("%s is not a multiple of 11.\n", num);
        }

    }
    return 0;
}