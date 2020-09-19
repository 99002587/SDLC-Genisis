#include<emp.h>
void add(FILE * fe)
{
printHead();
printf("\n\t\t\t\Add Employee");
char next='y';
Employee emp;
fseek(fe,0,SEEK_END);
while(next=='y'||next=='Y')
{
printf("\n\n\t\tEnter ID number: ");
 scanf("%d",&emp.id);
 printf("\n\n\t\tEnter Full Name of Employee: ");
 fflush(stdin);
 fgets(emp.name,100,stdin); //fgets takes an extra \n
character as input
emp.name[strlen(emp.name)-1]='\0';
 printf("\n\n\t\tEnter Designation: ");
 fflush(stdin);
 fgets(emp.desgn,10,stdin); //fgets takes an extra \n
character as input
 emp.desgn[strlen(emp.desgn)-1]='\0';
 printf("\n\n\t\tEnter Gender: ");
 fflush(stdin);
fgets(emp.gender,10,stdin); //fgets takes an extra \n
character as input
 emp.gender[strlen(emp.gender)-1]='\0';
 printf("\n\n\t\tEnter Branch: ");
 fflush(stdin);
 fgets(emp.branch,50,stdin);
emp.branch[strlen(emp.branch)-1]='\0';
 printf("\n\n\t\tEnter Salary: ");
 scanf("%f",&emp.sal);
 printf("\n\n\t\tEnter Present Address: ");
 fflush(stdin);
 fgets(emp.psaddr,200,stdin);
 emp.psaddr[strlen(emp.psaddr)-1]='\0';
printf("\n\n\t\tEnter Permanant Address: ");
 fflush(stdin);
 fgets(emp.prtaddr,200,stdin);
 emp.prtaddr[strlen(emp.prtaddr)-1]='\0';
 printf("\n\n\t\tEnter Phone: ");
 fflush(stdin);
 fgets(emp.phone,50,stdin);
emp.phone[strlen(emp.phone)-1]='\0';
 printf("\n\n\t\tEnter E-mail: ");
 fflush(stdin);
 fgets(emp.mail,20,stdin);
 emp.mail[strlen(emp.mail)-1]='\0';
 fwrite(&emp,sizeof(emp),1,fe);
 printf("\n\n\t\tWant to enter another employee info
(Y/N)\t");
 fflush(stdin);
 next=getchar();
}
}
