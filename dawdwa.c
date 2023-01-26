//#include <stdio.h>
//void print(){
//    printf("%d %d",a,b);
//}
//int fun1(){
//    int a,c;
//    a=0,b=1,c=2;
//    return c;
//}
//void fun2(){
//    int b;
//    a=3;b=4;
//    print();
//}
//int main(void) {
//    a=fun1();
//    fun2();
//	return 0;
//}

#include<stdio.h>
int x = 50;
int fun2(){
    return x;
}
int fun1(){
    int x = 10;
    int y = fun2();
    return y;
}
int main(){
    printf("%d",fun1());
    return 0;
}
