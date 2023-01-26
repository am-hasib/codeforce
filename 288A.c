#include<stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    long int s[4],i,s2[4],count=0,j;
    for(i=0; i<4; i++)
        scanf("%li",&s[i]);
    for(i=0; i<4; i++)
    {
        count=0;
        for(j=0; j<4; j++)
            if(s[i]==s[j] && i!=j) s2[i]=1; else s2[i]=0;

    }
    for(i=0; i<4; i++)
        printf("%li ",s2[i]);
    return 0;
}


