#include<emp.h>

int main()
{
FILE * fn;
Employee emp;
int choice;
char next;
if((fn=fopen("employeeInfo.txt","rb+"))==NULL)
{
 if((fn=fopen("employeeInfo.txt","wb+"))==NULL)
 {
 printf("unable to open file");
 return 0;
 }
}
char name[10],pass[10];
printHead();
welcome();
printHead();
printf("\n\t\t\t\t Loging in");
printf("\n\t\t\t Enter Your Data");
printf("\n\n\n\t\tUser ID: ");
scanf("%s",&name);
printf("\n\t\tPassword: ");
int count;
count=0;
do
{
pass[count] = getch();
if(pass[count] == 13 )
{
break;
}
else if(pass[count]==8 && i>0)
{
printf("%c%c%c",8,32,8);
i--;
}
else
{
printf("*");
i++;
}
}while(pass[count]!=13);
pass[count] = '\0';
if(((strcasecmp(name,"admin"))==0)&&((strcasecmp(pass,"pass")==0)))
{
 while(TRUE)
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
 printf("\n\n\t\t\t11. List of Employee From Others District");
 printf("\n\n\t\t\t12. List of Employee of Main Branch");
 printf("\n\n\t\t\t13. List of Employee of Others Branch");
 printf("\n\n\t\t\t0. EXIT");
 printf("\n\n\t\tEnter Your choice :--> ");
 scanf("%d",&choice);
switch(choice)
 {
 case 0: return 1;
 break;
 case 1: add(fn);
 break;
 case 2: fn=del(fn);
 break;
 case 3: modify(fn);
 break;
 case 4: displayList(fn);
 break;
 case 5: searchRecord(fn);
 break;
 case 6: displaybasic(fn);
 break;
 case 7: basiccontact(fn);
 break;
 case 8: maleemp(fn);
 break;
 case 9: femaleemp(fn);
 break;
 case 10: frmdhaka(fn);
 break;
 case 11: frmors(fn);
 break;
 case 12: mainbr(fn);
 break;
 case 13: otherbr(fn);
 break;
 default: printf("\n\t\twrong key pressed");
 printf("\n\t\tProgram END");
 getch();
 exit(0);
 }
}
}
else {
 printf("\n\t\tAcess Failed");
}
return 1;
}
