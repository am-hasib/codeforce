#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,size,count=0;
    char a[101];
    gets(a);
    size = strlen(a);
    for(i=0; i<size; i++)
    {
        for(j=0; j<size-i-1; j++)
        {

            if(a[j]!='+')
            {
                count++;
                if(a[j]>a[j+2])
                {
                    char temp = a[j];
                    a[j]=a[j+2];
                    a[j+2]=temp;
                }

            }
        }
    }
    puts(a);
    printf("%d",count);
    return 0;
}
