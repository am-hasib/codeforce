#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long int a,b,c;
        scanf("%ld %ld",&a,&b);
        c = MIN(MIN(a,b),(a+b)/4);
        printf("%d\n",c);
    }

    return 0;
}
