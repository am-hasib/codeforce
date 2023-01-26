#include<stdio.h>

int main()
{
    int n,i,j,a[100][2],count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);
    for(i=0,j=0;i<n;i++)
        if(a[i][j]+2<=a[i][j+1])
            count++;

    printf("%d",count);
    return 0;
}



