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
