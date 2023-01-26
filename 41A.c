#include<stdio.h>
#include<string.h>

int main()
{
    char s[101],t[101];
    scanf("%[^\n] ",s);
    scanf(" %[^\n]",t);
//    gets(s);
//    gets(t);
    strrev(s);
    strcmp(s,t) == 0 ? printf("YES"):printf("NO");
    return 0;
}
