#include<stdio.h>
#include<math.h>

int main()
{
    int a[4],i,j;
    for(i=0; i<4; i++){
        scanf("%d",&a[i]);

    }
    for(i=0; i<4; i++)
    {
        for(j=0; j<4-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }

        }
    }
    for(i=0; i<4; i++)
        printf("%d ",a[i]);
    return 0;
}
