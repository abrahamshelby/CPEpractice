#include<stdio.h>

long long int kuti = 10000000;
long long int lakh = 100000;
long long int hajar = 1000;
long long int shata = 100;

void bangla(long long int n)
{
    if(n >= kuti)
    {
        bangla(n / kuti);
        printf(" kuti");
        n %= kuti;
        if(n > 0) printf(" ");
    }

    if(n >= lakh)
    {
        printf("%lld lakh", n / lakh);
        n %= lakh;
        if(n > 0) printf(" ");;
    }

    if(n >= hajar)
    {
        printf("%lld hajar", n / hajar);
        n %= hajar;
        if(n > 0) printf(" ");;
    }

    if(n >= shata)
    {
        printf("%lld shata", n / shata);
        n %= shata;
        if(n > 0) printf(" ");;
    }

    if(n > 0)
    {
        printf("%lld",n);
    }
}

int main()
{
    long long int number;
    int casenum = 1;
    while((scanf("%lld",&number))==1)
    {
        printf("%d. ",casenum++);
        if(number == 0) break;
        else
        {
            bangla(number);
        }
        printf("\n");
    }
    return 0 ;
}