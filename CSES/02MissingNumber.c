#include<stdio.h>
//#include <stdlib.h>
//#include <limits.h>
//#include <float.h>
//int main(int argc, char** argv){
//
//
//
//    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
//    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
//    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
//    printf("INT_MAX     :   %d\n", INT_MAX);
//    printf("INT_MIN     :   %d\n", INT_MIN);
//    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
//    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
//    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
//    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
//    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
//    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
//    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
//    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
//    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
//    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);
//    return 0;
//}
int main()
{
    long int a[200000],flag,n,i,j;
    scanf("%d",&n);
    for(i=1; i<n; i++)
        scanf("%ld",&a[i]);
    for(i=1; i<n; i++)
    {
        for(j=1; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j]= a[j+1];
                a[j+1] =temp;
            }

        }
    }
//    for(i=1; i<n; i++)
//        printf("%d ",a[i]);
    for(i=1; i<n+1; i++)
    {
        if(i!=a[i])
        {
            flag=i;
            break;
        }
    }
    printf("\n%ld",flag);


    return 0;
}
