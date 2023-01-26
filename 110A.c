#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long long n;
    int flag=0;
    scanf("%lld",&n);
    while(n!=0){
        if(n%10==7 || n%10==4) flag++;
        n/=10;
    }
    (flag==7 || flag==4 )? printf("YES"): printf("NO");
    return 0;
}

