#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n,i,counter=0,danik;
    char str[100001];
    scanf("%d",&n);
    scanf(" %[^\n]",str);
    for(i=0;i<strlen(str);i++){
        if(str[i]=='A')
            counter++;
    }
    danik = strlen(str)-counter;
    if(counter>danik) printf("Anton");
    else if(counter==danik) printf("Friendship");
    else printf("Danik");
    return 0;
}

