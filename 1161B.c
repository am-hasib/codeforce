#include<stdio.h>

int main(){
    int t;
    long int a[10000][2];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scan("%d %d",&a[i][0],&a[i][1]);
    }

    return 0;
}
