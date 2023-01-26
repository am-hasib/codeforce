#include<stdio.h>
int linear_search(int *a[10],int size,int x)
{
    int i;
//    printf("%d %d",size,x);
    for(i=0; i<size; i++)
    {
        if(a[i]==x)
        {
            return i;
        }
    }
    return -1;
}

//int binary_search(int a[],int size,int x)
//{
//    int left=0,right=size-1,mid;
//    while(left<=right)
//    {
//        mid = (left+right)/2;
//        if(a[mid]==x)
//        {
//            return mid;
//        }
//        else if(a[mid]>x)
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            left = mid + 1;
//        }
//    }
//    return -1;
//}
//
//void selection_sort(int a[],int size)
//{
//    int i,j,temp, min_index;
//    for(i=0; i<size-1; i++)
//    {
//        min_index = i;
//        for(j = i+1; j<size; j++)
//        {
//            if(a[j]<a[i])
//                min_index = j;
//        }
//        if(min_index !=i)
//        {
//            temp = a[i];
//            a[i] = a[min_index];
//            a[min_index]=temp;
//        }
//    }
//}
//void bubble_sort(int a[],int size)
//{
//    int i,j,temp;
//    for(i=0; i<size; i++)
//    {
//        for(j=0; j<size-i-1; j++)
//        {
//            if(a[j]>a[j+1])
//            {
//                temp = a[j];
//                a[j]=a[j+1];
//                a[j+1] = temp;
//            }
//        }
//    }
//}
//int insertion_sort(int a[],int size)
//{
//    int i,j,temp;
//    for(i=0; i<size; i++)
//    {
//        temp = a[i];
//        j=i-1;
//        while(j>=0 && a[j]>temp)
//        {
//            a[j+1]=a[j];
//            j-=1;
//        }
//        a[j+1]=temp;
//    }
//}
int main()
{
    int a[10]= {10,2,3,4,57,8,76,20,25,34};
    int i;
    for(i=0; i<10; i++)
    {
        if(a[i]==34)
        {
            return i;
        }
    }
    return -1;
//    return 0;
}
