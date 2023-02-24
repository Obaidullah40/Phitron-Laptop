#include<stdio.h>

struct Student
{
    int roll;
    char name[60];
    double marks;
};

void printStudent(int n, struct Student s)
{
    printf("Information of Student %d\n", n);
    printf("Roll -> %d\n", s.roll);
    printf("Name -> %s\n", s.name);
    printf("Mark -> %lf\n", s.marks);
}

int main()
{
    struct Student cls[5];
    int i;
    for (int i = 0; i < 5; i++)
    {
        printf("\nPlease enter Roll -> \n");
        scanf("%d", &cls[i].roll);
        printf("Please enter Name -> \n");
        scanf("%s", cls[i].name);
        printf("Please enter mark -> \n");
        scanf("%lf", &cls[i].marks);
    }

    double summ = 0;
    for (int i = 0; i < 5; i++) 
    {
        if (cls[i].roll % 2 == 0)
        {
            summ += cls[i].marks;
            printStudent(i, cls[i]);
        }
    }
    printf("Total marks %lf\n", summ);
    
    return 0;
}