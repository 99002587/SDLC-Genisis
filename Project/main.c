#include<emp.h>

int main()
{
FILE * fp;
Employee e;
int option;
char another;
if((fp=fopen("employeeInfo.txt","rb+"))==NULL)
{
 if((fp=fopen("employeeInfo.txt","wb+"))==NULL)
 {
 printf("can't open file");
 return 0;
 }
}
char username[10],password[10];
printHead();
welcome();
printHead();
printf("\n\t\t\t\t Login Screen");
printf("\n\t\t\t Enter Your Credential");
printf("\n\n\n\t\tUsername: ");
scanf("%s",username);
printf("\n\t\tPassword: ");
int i;
i=0;
do
{
password[i] = getch();
if(password[i] == 13 )
{
break;
}
else if(password[i]==8 && i>0)
{
printf("%c%c%c",8,32,8);
i--;
}
else
{
printf("*");
i++;
}
}while(password[i]!=13);
password[i] = '\0';
if(((strcasecmp(username,"admin"))==0)&&((strcasecmp(passw
ord,"pass")==0)))
{
 while(1)
{
printHead();
 printf("\n\t\t\t\tMain Menu");
 printf("\n\n\n");
 printf("\n\n\t\t\t1. Add Employee");
 printf("\n\n\t\t\t2. Delete Employee");
 printf("\n\n\t\t\t3. Modify Employee");
 printf("\n\n\t\t\t4. Display Employee List");
 printf("\n\n\t\t\t5. Search Record");
 printf("\n\n\t\t\t6. Display Basic Info");
 printf("\n\n\t\t\t7. Display Basic Contact Info");
 printf("\n\n\t\t\t8. List of Male Employee");
 printf("\n\n\t\t\t9. List of Female Employee");
 printf("\n\n\t\t\t10. List of Employee From Dhaka");
 printf("\n\n\t\t\t11. List of Employee From Others
District");
 printf("\n\n\t\t\t12. List of Employee of Main Branch");
 printf("\n\n\t\t\t13. List of Employee of Others
Branch");
 printf("\n\n\t\t\t0. EXIT");
 printf("\n\n\t\tEnter Your Option :--> ");
 scanf("%d",&option);
