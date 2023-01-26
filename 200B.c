#include<stdio.h>
int main()
{
    int n,i,sum=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&j);
        sum += j;
    }
    printf("%.12lf",(double)sum/n);
    return 0;
}

