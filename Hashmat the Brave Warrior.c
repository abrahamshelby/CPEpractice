#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    int b;


    while ((scanf("%d %d", &a, &b)) == 2)
    {
    int result = 0;
    result = abs(a-b);
    printf("%d\n", result);
    }

    return 0;


}
