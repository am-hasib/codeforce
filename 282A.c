#include<stdio.h>
int main()
{
    int n,X=0;
    char str[150];
    scanf("%d",&n);
    while(n!=0)
    {
        scanf(" %[^\n]",str);
        if(str[0] == '+'&& str[1]=='+' ) ++X;
        else if(str[1] == '+' && str[2]=='+' ) X++;
        else if(str[0] == '-'&& str[1]=='-' ) --X;
        else if(str[1] == '-'&& str[2]=='-' ) X--;
        n--;//
    }
    printf("%d",X);
    return 0;
}
