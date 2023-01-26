#include<stdio.h>
int main()
{
    int n,i,j;
    long int a[10000][2],b[10000];
    scanf("%d",&n);
    for(i=0; i<n; i++)
        for(j=0;j<2;j++)
            scanf("%li",&a[i][j]);
    for(i=0; i<n; i++){
        if(a[i][0]%a[i][1]==0){
            b[i]=0;
        }else{
            b[i]=(((a[i][0] / a[i][1]) + 1) * a[i][1]) - a[i][0];
        }
    }
    for(i=0; i<n; i++)
        printf("%d\n", b[i]);
    return 0;
}

