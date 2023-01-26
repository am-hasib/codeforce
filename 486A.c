#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lli",&n);
    if(n%2==0) n/=2;
    else n=(n/2)-n;
    printf("%lli",n);
    return 0;
}




