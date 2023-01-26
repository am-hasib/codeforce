#include<stdio.h>
#include<math.h>
int main(){
    int n,k,a[100],count=0,i,point;
    scanf("%d %d",&n,&k);
    for(i=1;i<= n;i++)
        scanf("%d",&a[i]);
    point=a[k];
    for(i=1;i<=n;i++){
        if(a[i]>=point && a[i]!=0)
            count++;
    }
    printf("%d",count);
    return 0;
}
