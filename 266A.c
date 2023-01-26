#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[51];
    int n,count=0;
    scanf("%d %s",&n,str);
    for ( int i = 0; i<n; i++)
    {
        if(str[i]==str[i+1])
            count++;
    }
    printf("%d",count);
    return 0;
}

//BGGBG
//BGGBG
//GBGBG

