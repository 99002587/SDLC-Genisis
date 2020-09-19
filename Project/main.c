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
