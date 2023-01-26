#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,j,abc[6][6],row,column;
    for(i=1; i<=5; i++)
        for(j=1; j<=5; j++)
            scanf("%d", &abc[i][j]);


    for(i=1; i<=5; i++)
    {

        for(j=1; j<=5; j++)
        {

            if(abc[i][j]==1)
            {
                row=i;column=j;
//                for Output
//                abc[i][j]=0;
//                abc[3][3]=1;
                break ;
            }
        }

    }
//    printf("\n***************\n");
//    printf("Beautiful Array\n");
//    printf("***************\n");
//    for(i=1; i<=5; i++){
//        for(j=1; j<=5; j++)
//            printf("%d ", abc[i][j]);
//        printf("\n");
//    }

//    printf("%d %d",row,column);
    printf("%d",abs(row-3)+abs(column-3));
    return 0;
}






