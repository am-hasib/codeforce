#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Student
{
    char name[100];
    int id;
    double cgpa;
    char phone[12];
} std[50];

int i=0;

void add_std()
{
    printf("\nEnter Student Name: ");
    scanf(" %[^\n]",std[i].name);
    printf("\nEnter id: ");
    scanf("%d",&std[i].id);
    printf("\nEnter CGPA: ");
    scanf("%lf",&std[i].cgpa);
    printf("\nEnter phone: ");
    scanf("%s",std[i].phone);
    i= i+ 1;
    system("cls");

};
void update_std()
{
    int x,j;
    printf("Student ID: ");
    scanf("%d",&x);
    for(j=0; j<=i; j++)
    {
        if(x==std[j].id)
        {
            printf("Student NAME: ");
            scanf(" %[^\n]",std[j].name);
            printf("Student ID: ");
            scanf("%d",&std[j].id);
            printf("Student CGPA: ");
            scanf("%lf",&std[j].cgpa);
            printf("Student PHONE: ");
            scanf("%[^\n]",std[j].phone);
        }
    }
    printf("Student Update Successfully\n");
};

void delete_std()
{
    int x,j;
    scanf("%d",&x);
    for(j=0; j<=i; j++)
    {
        if(x==std[j].id)
        {
            for(int k = j; k<i; k++)
                std[k] = std[k+1];
            i--;
        }

    }
    printf("Student Remove Successfully\n");
};
void search_id()
{
    int x,j;
    printf("Student ID: ");
    scanf("%d",&x);
    for(j=0; j<=i; j++)
    {
        if(x==std[j].id)
        {
            printf("\nStudent Information with id: %d\n",std[j].id);
            printf("Student Name: %s\n",std[j].name);
            printf("Student Name: %d\n",std[j].id);
            printf("Student Name: %.2lf\n",std[j].cgpa);
            printf("Student Name: %s\n",std[j].phone);
        }

    }
    printf("\n\n");

};
void view_all_std()
{
    printf("\n***Total Student : %d\n",i);
    printf("Name \t\t\t\t ID \t\t CGPA\t\t Phone\t\n");
    for(int j=0; j<i; j++)
    {
        printf("%s\t\t",std[j].name);
        printf("%d\t",std[j].id);
        printf("%lf\t",std[j].cgpa);
        printf("%s\t",std[j].phone);
        printf("\n");
    }
    printf("\n\n\n");
};

int main()
{
    int choice;
    while(1)
    {

        printf("****Student Management System*** \n\n");
        printf("1.Add Student: \n");
        printf("2.Update Student: \n");
        printf("3.Delete Student: \n");
        printf("4.Search By ID: \n");
        printf("5.View All Students \n");
        printf("6.Exit \n\n");
        printf("Enter Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            add_std();
            break;
        case 2:
            update_std();
            break;
        case 3:
            delete_std();
            break;
        case 4:
            search_id();
            break;
        case 5:
            view_all_std();
            break;
        default:
            exit(0);

        }
    }
    return 0;
}
//Abdullah Mohammad Hasib
//222002117
//3.5
//01680453850
