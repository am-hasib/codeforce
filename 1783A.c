#include<stdio.h>
#include<string.h>

int main()
{

    int t,n,a[100],i,j,sum=0;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
            if(sum+=a[i]!=a[i+1])
        }
    }
    for(i=0; i<t; i++)
    {
        for(j=0; j<n; j++)
        {
            for(i=0; i<n; i++)
            {
                sum+=a[j];
                if(sum==a[i])
                {
                    printf("NO");
                }else{
                    printf("YES");

                }
            }
        }
    }
    return 0;
}
//
//1
//2
//10 10
