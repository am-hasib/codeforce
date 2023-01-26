#include<stdio.h>
#include<math.h>

int main()
{
    int a[3],i,j,total_dis;
//x1, x2,x3,max,min,mid,
//    scanf("%d %d %d", &x1,&x2,&x3);
//    if((x1>x2 || x2<x1) && (x2>x3 || x3<x2))
//    {
//        min = x3;mid=x2;max=x1;
//    }
    for(i=0; i<3; i++)
        scanf("%d",&a[i]);
    for(i=0; i<3; i++)
    {
        for(j=0; j<3-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }

        }
    }
    total_dis = abs(a[1]-a[0]) + abs(a[1]-a[2]);
    printf("%d",total_dis);
    return 0;
}
