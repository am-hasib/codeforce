#include<stdio.h>
int main()
{
    int n,rt,pt,i,sum=0,a[10],count=0;
    scanf("%d %d",&n,&rt);
    pt = 240-rt;
    for(i=1;i<=n;++i){
        sum = sum + i * 5;
        a[i]=sum;
        if(a[i]<=pt)
            count++;
    }
    printf("%d",count);

    return 0;
}


