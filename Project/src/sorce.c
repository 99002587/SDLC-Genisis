#include<emp.h>
void add(FILE * fp)
{
printHead();
printf("\n\t\t\t\Add Employee");
char another='y';
Employee e;
fseek(fp,0,SEEK_END);
while(another=='y'||another=='Y')
{
printf("\n\n\t\tEnter ID number: ");
 scanf("%d",&e.id);
 printf("\n\n\t\tEnter Full Name of Employee: ");
 fflush(stdin);
 fgets(e.name,100,stdin); //fgets takes an extra \n
character as input
e.name[strlen(e.name)-1]='\0';
 printf("\n\n\t\tEnter Designation: ");
 fflush(stdin);
 fgets(e.desgn,10,stdin); //fgets takes an extra \n
character as input
 e.desgn[strlen(e.desgn)-1]='\0';
 printf("\n\n\t\tEnter Gender: ");
 fflush(stdin);
fgets(e.gender,10,stdin); //fgets takes an extra \n
character as input
 e.gender[strlen(e.gender)-1]='\0';
 printf("\n\n\t\tEnter Branch: ");
 fflush(stdin);
 fgets(e.branch,50,stdin);
