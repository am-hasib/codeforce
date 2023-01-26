#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j,sum,a[100][3],b[3],flag=0;
    scanf("%d",&n);

    for(i=0; i<n; i++)
        for(j=0; j<3; j++)
            scanf("%d",&a[i][j]);
    for(i=0; i<3; i++)
    {
        sum=0;
        for(j=0; j<n; j++)
        {
            sum= sum+ a[j][i];
        }
        b[i]=sum;
    }
    for(i=0; i<3; i++)
    {
        if(b[i]!=0)
            flag=1;
    }
    if(flag==0) printf("YES");
    else printf("NO");
    return 0;
}



