#include<stdio.h>
#include<string.h>

int main()
{   int i;
    char str[1001];
    gets(str);
    if(str[0]>=97 && str[0]<=122)
        str[0]=str[0]-32;
    puts(str);
    return 0;
}

