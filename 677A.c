#include<stdio.h>
#include<string.h>

int main()
{
    int h,f,a[2000],count=0;
    scanf("%d %d",&f,&h);
    for(int i=0;i<f;i++){
        scanf("%d",&a[i]);
        if (a[i]<=h) count++; else count+=2;
    }
    printf("%d",count);
    return 0;
}

