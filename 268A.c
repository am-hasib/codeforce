//#include<stdio.h>
//int main(){
//    int t,a[30][2],i,j,count=0;
////    freopen("input.txt", "r", stdin);
////    freopen("output.txt", "w", stdout);
//    scanf("%d",&t);
//    for(i=0;i<t;i++)
//        scanf("%d %d",&a[i][0],&a[i][1]);
//
//    for(i=0;i<t;i++){
//        for(j=0;j<t;j++){
//            if(a[i][0]==a[j][1]){
//                count++;
//            }
//        }
//    }
//    printf("%d",count);
//    return 0;
//}

#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,a,b,c,d;
    scanf("%lli",&n);
    printf("%lli ",(n*(n-1))/2);
    printf("%lli ",pow(n,n));
    printf("%lli ",pow(2,n)+pow(3,n));
    po
    return 0;
}
