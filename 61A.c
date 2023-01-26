#include<stdio.h>

int main(){

    char a[101],b[101],c[101];
    gets(a);
    gets(b);
    for(int i=0;a[i]!='\0';i++){
        if(b[i]=='1' && a[i]=='1') c[i]='0';
        else if(b[i]=='0' && a[i]=='0') c[i]='0';
        else c[i]='1';
    }
    for(int i=0;a[i]!='\0';i++)
        printf("%c",c[i]);

    return 0;
}
