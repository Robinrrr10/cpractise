#include<stdio.h>
struct student
{
    int id;
    char name[20];
    int mark;
};
void execute(int);
void printStudent(struct student[],int);
void main()
{
    int numOfStd;
    printf("Enter number of students\n");
    scanf("%d", &numOfStd);
    execute(numOfStd);
}
void execute(int num)
{
    struct student stds[num];
    for(int i=0; i<num; i++)
    {
        printf("Enter student %d details\n", i+1);
        struct student std;
        printf("Enter id:\n");
        scanf("%d", &std.id);
        printf("Enter name:\n");
        scanf("%s", &std.name);
        printf("Enter mark:\n");
        scanf("%d", &std.mark);
        stds[i] = std;
    }
    printStudent(stds, num);
}
void printStudent(struct student std[], int num)
{
    for(int i=0; i<num;i++)
    {
     printf("Id: %d, name: %s, mark: %d\n", std[i].id, std[i].name, std[i].mark);
    }
}

