#include<stdio.h>
int main()
{
    int t,a[1000],count=0,i,j;
    scanf("%d",&t);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    for(i=0; i<t; i++)
        scanf("%d",&a[t]);
    for(i=0,j=i+1; j<t; i++,j++)
    {
        if(i==0) {continue;}
        else if(a[i]<a[i+1] || a[i]>a[i+1] && a[i])
        {
            count++;
        }else{
            count--;
        }
    }
    printf("%d",count);
    return 0;
}
