#include<stdio.h>
#include<string.h>

int main()
{
    char name[101];
    int i,count=0,size,str[123]={0};
    scanf("%s",name);
    size= strlen(name);
    for(i=0;i<size;i++){
        str[name[i]]++;
    }
    for(i=0;i<123;i++){
        if(str[i]>=1)
            count++;
    }
    count %2==0? printf("CHAT WITH HER!"): printf("IGNORE HIM!");
    return 0;
}
