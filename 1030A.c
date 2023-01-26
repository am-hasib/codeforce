#include<stdio.h>

int main()
{
    int n,i,a[100],flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        if(a[i]==1)
            flag=1;
    }
    flag==1?printf("HARD"): printf("EASY");
    return 0;
}


