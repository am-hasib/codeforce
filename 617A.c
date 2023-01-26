#include<stdio.h>
#include<string.h>

int main()
{
    long int n;
    scanf("%ld",&n);
    if(n>=5 && (n%5)==0) printf("%ld",n/5);
    else printf("%ld",(n/5)+1);
    return 0;
}



