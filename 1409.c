#include<stdio.h>
#include<math.h>

int main()
{
//    int t,i,j;
//    long int a[10000][2];
//    scanf("%d",&t);
//    for( i = 0; i<t; i++)
//    {
//        for(j=0; j<2; j++)
//        {
//            scanf("%li",&a[j]);
//
//        }
//    }
//    for( i = 0; i<t; i++)
//    {
//        for(j=0; j<2; j++)
//        {
//            printf("%li",a[j]);
//
//        }
//        printf("\n");
//    }
//    return 0;
     long long int n;
    scanf("%lli",&n);
    while(n!=1)
    {
        if(n==1) break;
        if( n%2==0) n/=2;
        else (n*=3)+1;
    }
        printf("%lli\n",n);
    return 0;
}

