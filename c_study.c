#include<stdio.h>
#include<limits.h>
int main()
{
    /** Array Initialization and traversing*/
//    int a1[100] = {};
//    int a2[100] = {1,2,2};
//    int a3[3] = {1,2,2};
//    int a4[] = {0,1,2,3,4,5,6,7,8,9};
//    for(int i=0;i<100;i++)
//        printf("%d ",a1[i]);
//    printf("\n");
//    for(int i=0;i<100;i++)
//        printf("%d ",a2[i]);
//    printf("\n");
//    for(int i=0;i<3;i++)
//        printf("%d ",a3[i]);
//    printf("\n");
//    for(int i=0;i<sizeof(a4)/4;i++)
//        printf("%d ",a4[i]);
    /** Array Insertion*/
    int n,p,v,i,a[1000],x,r,temp,j;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
//    printf("position and value\n");
//    scanf("%d %d",&p,&v);
//    for(i=n-1; i>=p-1; i--)
//        a[i+1]=a[i];
//    a[p-1]=v;
//    for(i=0; i<n+1; i++)
//        printf("%d ",a[i]);
//    x = i;
    /**Delete an element*/
//    printf("\nDelete Position: ");
//    scanf("%d",&p);
//    if(p >=n+1)
//        printf("Position is not available");
//    else
//    {
//        for(i=p-1; i<x-1; i++)
//            a[i]=a[i+1];
//        for(i=0; i<x-1; i++)
//            printf("%d ",a[i]);
//    }
    /**Reversing Array*/

//    for(i=0,j=n-1; i< n/2 ; i++,j--)
//    {
//        temp = a[i];
//        a[i]=a[j];
//        a[j] = temp;
//    }
//    for(i=0; i<n; i++)
//        printf("%d ",a[i]);
    /**Reversing First Half Array*/
//    for(i=0,j=(n/2)-1; i< n/4 ; i++,j--)
//    {
//        temp = a[i];
//        a[i]=a[j];
//        a[j] = temp;
//    }
//    printf("\n");
//    for(i=0; i<n; i++)
//        printf("%d ",a[i]);
    /**Reversing last Half Array*/

//    if(n%2==0)
//    {
//        for(i=(n/2),j=n-1; i<j; i++,j--)
//        {
//            temp = a[i];
//            a[i]=a[j];
//            a[j] = temp;
//        }
//    }
//    if(n%2!=0)
//    {
//        for(i=(n/2)+1,j=n-1; i<j ; i++,j--)
//        {
//            temp = a[i];
//            a[i]=a[j];
//            a[j] = temp;
//        }
//    }


//    printf("\n");
    /**Decimal to binary*/
//
//    scanf("%d",&n);
//    for(i=0; n!=0; i++)
//    {
//        r=n%2;
//        a[i]=r;
//        n/=2;
//    }
//    for(i=i-1; i>=0; i--)
//        printf("%d ",a[i]);
    /**Find the 2nd Largest Number in Array*/
//    int l1=INT_MIN, l2=INT_MIN;
//    for(i=0;i<n;i++){
//        if(a[i]>l1){
//            l2=l1;
//            l1=a[i];
//        }
//        if(a[i]>l2 && a[i]<l1){
//            l2=a[i];
//        }
//    }
//    printf("First Largest: %d, 2nd Largest: %d\n",l1,l2);

    /**Find the 2nd Lowest Number in Array*/
//    int l1=INT_MAX, l2=INT_MAX;
//    for(i=0;i<n;i++){
//        if(a[i]<l1){
//            l2=l1;
//            l1=a[i];
//        }
//        if(a[i]<l2 && a[i]>l1){
//            l2=a[i];
//        }
//    }
//    printf("First Smallest: %d, 2nd Smallest: %d\n",l1,l2);
    /** Count the Elelemt in Array*/
    int c,b[1000],d[1000];
    for(i=0; i<n-1; i++)
    {
        c=1;
        for(j=i+1; j<n; j++)
        {
            if(a[i]==0)
                continue;
            if(a[i]==a[j] && i!=j)
            {
                c++;
                a[j]=0;

            }
        }
        if(c>1) printf("%d: %d times\n",a[i],c);
    }
    return 0;
}
//10
//1 2 3 4 5 6 7 8 9 10
//10 1000
//10

//10
//1 2 3 4 5 6 7 8 9 10
//10
//10
//1 2 1 5 6 9 6 1 2 0
