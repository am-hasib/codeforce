#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int t,i,a[50000],j;
    long int x,y,n;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%ld %ld %ld",&x,&y,&n);
        for(j=0;j<y;j++){
            if(n%x==y){
                a[i]=n;
                break;
            }
            n--;
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[t]);
    return 0;
}

