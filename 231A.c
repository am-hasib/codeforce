#include<stdio.h>
int main()
{
    int n,a[1000][3],i,j,count,solved[1000];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        count=0;
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]%2!=0)
                count++;
        }
        solved[i]=count;

    }
    count=0;
    for(i=0; i<n; i++)
        if(solved[i]>1)
            count++;

    printf("%d ",count);
    return 0;
}

