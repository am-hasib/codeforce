#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

struct car
{
    int fuel_tank_cap;
    int seating_capacity;
    float milage;
};

int main ()
{
//    struct car c[2];
//    for(int i=0; i<2; i++)
//    {
//        printf("\nEnter Car %d Details\n",i+1);
//        printf("Car %d Fuel Tank Capacity: ",i+1);
//        scanf("%d",&c[i].fuel_tank_cap);
//        printf("Car %d Seating Capacity: ",i+1);
//        scanf("%d",&c[i].seating_capacity);
//        printf("Car %d Millage: ",i+1);
//        scanf("%f",&c[i].milage);
//    }
//    for(int i=0; i<2; i++)
//    {
//        printf("\nCar %d Details\n",i+1);
//        printf("Car %d Fuel Tank Capacity: %d\n",i+1,c[i].fuel_tank_cap);
//        printf("Car %d Seating Capacity: %d\n",i+1,c[i].seating_capacity);
//        printf("Car %d Seating Millage: %f\n",i+1,c[i].milage);
//    }
//    int n=20, *p,a[20];
//    p=&n;
//    printf("N: %d\n",n);
//    printf("P: %d\n",*p);
//
//    printf("N: %p\n",&n);
//    printf("P: %p\n",p);
//    for(int i=0;i<10;i++)
//        scanf("%d",&a[i]);
//    for(int i=0;i<10;i++)
//        printf("%d => %d\n", a+i, a[i]);
    int a[6]= {11,22,33,44,55,66};
    int p;
    printf("%d %d\n",a, &a[0]);
    printf("%d %d\n",*a,a[0]);
    printf("%d %d\n",*(a+1),a[1]);
    scanf("%d",&p);
    int *b=&p;
    printf("%d",*b+1);
    return 0;
}
//10
//8
//20.3
//52
//45
//100.3
//1 2 3 4 5 6 7 8 9 0
