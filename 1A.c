#include<stdio.h>
#include<math.h>
int main(){

    double m, n,a;
    long long int titles;
    scanf("%lf %lf %lf",&n,&m,&a);
    titles=ceil(n/a)*ceil(m/a);
    printf("%lld",titles);
    return 0;
}
