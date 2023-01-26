#include<stdio.h>

int main()
{
    long int n;

    scanf("%li",&n);
    while(n)
    {

        printf("%li ",n);
        if(n==1) break;
        if(n%2==0)
        {
            n/=2;
        }
        else
        {
            n=(n*3)+1;
        }

    }
    return 0;
}
