#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int i,w,k;
    long int n,price=0;
    scanf("%d %ld %d",&k,&n,&w);
    for(i=1;i<=w;i++){
        price += i*k;
    }
    if( price>n) printf("%ld",abs(price-n));
    else printf("0");

    return 0;
}



