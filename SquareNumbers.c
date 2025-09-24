#include <stdio.h>

int main()
{
    int a , b;

    while(scanf("%d %d", &a, &b) == 2)
    {

    if(a==0 && b==0)
    {
        break;
    }
    
    int number = 0;
    int i = 1;

    while(i * i <= b)
    {
        if(i * i >= a)
        {
            number++;
        }    
        i++;
    }

    printf("%d\n", number);

    }
}