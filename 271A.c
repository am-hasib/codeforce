#include<stdio.h>
int a[4],i;

int newYear(int b)
{
    int total = a[3];
    for(i=2; i>=0; i--)
        total = total + a[i]*10;
    return total;
}

int countDistintDigit(int old)
{
    int j,r,flag=0;
    for(i=0; old!=0; i++)
    {
        r = old %10;
        a[i]=r;
        old/=10;
    }
    for(i=0; i<4; i++)
        for(j=i+1; j<4; j++)
            if(a[i]==a[j])
                flag=1;
    if(flag==0)
        return i;
    return 0;
}

int main()
{
    int old;
    scanf("%d",&old);
    while(countDistintDigit(++old)<4);
    printf("%d",old);
    return 0;
}

