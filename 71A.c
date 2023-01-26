#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,num;
    char str1[100][101];
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf(" %[^\n]",str1[i]);
    for(i=0; i<n; i++){
        if(strlen(str1[i]) >10){
            printf("%c%d%c\n",str1[i][0],strlen(str1[i])-2,str1[i][strlen(str1[i])-1]);
        }else{
            puts(str1[i]);

        }


    }

    return 0;
}
