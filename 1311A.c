#include<stdio.h>
int main()
{
    int i,t,c[10000];
    unsigned long int a,b;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%u %u",&a,&b);

        if(a==b) c[i]=0;
        else if ((a<b && (b-a)%2!=0) || (a>b && (a-b)%2==0)) c[i]=1;
        else c[i]=2;
    }
    for(i=0;i<t;i++) printf("%d\n",c[i]);

    return 0;
}




