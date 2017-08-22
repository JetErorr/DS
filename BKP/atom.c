#include<stdio.h>
#include<conio.h>

struct student
{
int roll;
char name[30];
int m1,m2,m3;
};

void main()
{
struct student stu[3];
int i;

for(i=0;i<2;i++)
{
printf("Name of the student: \t");scanf("%s",&stu[i].name);
printf("Enroll number of the student: \t");scanf("%d",&stu[i].roll);
printf("Marks for subject 1: \t");scanf("%d",&stu[i].m1);
printf("Marks for subject 2: \t");scanf("%d",&stu[i].m2);
printf("Marks for subject 3: \t");scanf("%d",&stu[i].m3);
}

for(i=0;i<2;i++)
{


eHpwTS
printf("Rollno=%d",stu[i].roll);
printf("\t Name=%s ",stu[i].name);
printf("\t Total Marks=%d\n\n",stu[i].m1+stu[i].m2+stu[i].m3);
}
}
