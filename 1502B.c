#include<stdio.h>
int main()
{
    long int n,i,counter,j,a[10000];
    int t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {

        scanf("%ld",&n);
        counter=0;
        if(n>=10)
        {
            for(j=11; j<=n; j+=10)counter++;
            a[i]=counter+9;
        }
        else
        {
            a[i]=n;
        }
    }
    for(i=1; i<=t; i++)
        printf("%ld\n",a[i]);
    return 0;
}
