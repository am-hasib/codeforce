#include<stdio.h>
#include<string.h>

int main()
{
    int i,result ;
    char str1[100],str2[100],str3[100],str4[100];
    gets(strlwr(str1));
    gets(strlwr(str2));
    result = strcmp(strlwr(str1),strlwr(str2));
    printf("%d",result);
//    scanf("%[^\n] %[^\n]",str1,str2);
//    str3=();
//    str4=(strlwr(str2));
//    for(i=0; i<strlen(str1); i++);
//        if((str1[i]==str2[i]))
//        printf("0");

    return 0;
}



