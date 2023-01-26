//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//int main(){
//
//    int n,t;
//    char que[51];
//    scanf("%d %d %s",&n,&t,que);
//    for(i=0;i<n;i++){
//        if(que[i]=='B' && que[i+t]=='G'){
//            char temp = que[i];
//            que[i]=que[i+t];
//            que[i+t]=temp;
//        }
//
//    }
//    for(i=0;i<n;i++)
//         scanf("%c",que[i]);
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//	long int x,count=0,a[3];
//	scanf("%d",&x);
//	while(x!=0){
//		a[count]=x%1000;
//		x/=1000;
//		count++;
//
//	}
//	for(int i=count-1;a[i]!='\0';i--){
//
//
//
//	}
//
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//int main() {
//    char str[100],str2[100];
//	scanf("%s",str2);
//	strcpy(str,str2);
//	for(int i=0,j=strlen(str)-1;i<ceil(strlen(str)/2);i++,j--){
//		char temp = str[i];
//		str[i]=str[j];
//		str[j]=temp;
//	}
//	(strcmp(str,str2)==0)?printf("Yes"): printf("No");
//	return 0;
//}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c)
{
    int sum=0;
    int i=n-3;
    for(n=n; n>i; n--)
    {

        sum+=n;
    }
    return sum;
}

int main()
{
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}
