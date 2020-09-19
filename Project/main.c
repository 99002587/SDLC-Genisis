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
