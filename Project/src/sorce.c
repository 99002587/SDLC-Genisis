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
