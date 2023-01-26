
#include<stdio.h>
#include<string.h>

int main()
{
    char str[101];
    int i,upper=0,lower=0;
    scanf("%[^\n]",str);
    for(i=0; i<strlen(str); i++)
    {
        if(str[i] >='A' &&str[i] <='Z' )
            upper++;
        if(str[i] >='a' &&str[i] <='z' )
            lower++;

    }
    if(lower>=upper)
        puts(strlwr(str));
    else
        puts(strupr(str));
    return 0;
}



