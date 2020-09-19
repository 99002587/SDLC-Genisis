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
emp.name[strlen(emp.name)-1]=NULL;
 printf("\n\n\t\tEnter Designation: ");
 fflush(stdin);
 fgets(emp.desgn,10,stdin); //fgets takes an extra \n
character as input
 emp.desgn[strlen(emp.desgn)-1]=NULL;
 printf("\n\n\t\tEnter Gender: ");
 fflush(stdin);
fgets(emp.gender,10,stdin); //fgets takes an extra \n
character as input
 emp.gender[strlen(emp.gender)-1]=NULL;
 printf("\n\n\t\tEnter Branch: ");
 fflush(stdin);
 fgets(emp.branch,50,stdin);
emp.branch[strlen(emp.branch)-1]=NULL;
 printf("\n\n\t\tEnter Salary: ");
 scanf("%f",&emp.sal);
 printf("\n\n\t\tEnter Present Address: ");
 fflush(stdin);
 fgets(emp.psaddr,200,stdin);
 emp.psaddr[strlen(emp.psaddr)-1]=NULL;
printf("\n\n\t\tEnter Permanant Address: ");
 fflush(stdin);
 fgets(emp.prtaddr,200,stdin);
 emp.prtaddr[strlen(emp.prtaddr)-1]=NULL;
 printf("\n\n\t\tEnter Phone: ");
 fflush(stdin);
 fgets(emp.phone,50,stdin);
emp.phone[strlen(emp.phone)-1]=NULL;
 printf("\n\n\t\tEnter E-mail: ");
 fflush(stdin);
 fgets(emp.mail,20,stdin);
 emp.mail[strlen(emp.mail)-1]=NULL;
 fwrite(&emp,sizeof(emp),1,fe);
 printf("\n\n\t\tWant to enter another employee info
(Y/N)\t");
 fflush(stdin);
 next=getchar();
}
}
FILE * del(FILE * fe)
{
printHead();
printf("\n\t\t\t\Delete Employee");
Employee emp;
int flag=0,tempid,siz=sizeof(emp);
FILE *ft;
if((ft=fopen("temp.txt","wb+"))==NULL)
{
 printf("\n\n\t\t\t\\t!!! ERROR !!!\n\t\t");
 system("pause");
 return fe;
}
printf("\n\n\tEnter ID number of Employee to Delete the
Record");
printf("\n\n\t\t\tID No. : ");
scanf("%d",&tempid);
rewind(fe);
while((fread(&emp,siz,1,fe))==1)
{
 if(emp.id==tempid)
 { flag=1;
 printf("\n\tRecord Deleted for");

printf("\n\n\t\t%s\n\n\t\t%s\n\n\t\t%d\n\t",emp.name,emp.branc
h,emp.id);
 continue;
 }
 fwrite(&emp,siz,1,ft);
}
fclose(fe);
fclose(ft);
remove("employeeInfo.txt");
rename("temp.txt","employeeInfo.txt");
if((fe=fopen("employeeInfo.txt","rb+"))==NULL)
{
 printf("ERROR");
 return NULL;
}
if(flag==0) printf("\n\n\t\t!!!! ERROR RECORD NOT FOUND
\n\t");
printChar('-',65);
printf("\n\t");
system("pause");
return fe;
}
                   
                   
 void modify(FILE * fe)
{
printHead();
printf("\n\t\t\t\Modify Employee");
Employee emp;
int i,flag=0,tempid,siz=sizeof(emp);
float sal;
printf("\n\n\tEnter ID Number of Employee to Modify the
Record : ");
scanf("%d",&tempid);
rewind(fe);
while((fread(&e,siz,1,fe))==1)
{
 if(emp.id==tempid)
 {flag=1;
 break;
 }
}
if(flag==1)
 {
 fseek(fe,-siz,SEEK_CUR);
 printf("\n\n\t\tRecord Found");
 printf("\n\n\t\tEnter New Data for the Record");
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
}
else printf("\n\n\t!!!! ERROR !!!! RECORD NOT FOUND");
printf("\n\n\t");
system("pause");
}
       
       
       void searchRecord(FILE *fe)
{printHead();
printf("\n\t\t\t\Search Employee");
int tempid,flag,siz,i;
Employee emp;
char another='y';
siz=sizeof(emp);
while(another=='y'||another=='Y')
{
printf("\n\n\tEnter ID Number of Employee to search the
record : ");
scanf("%d",&tempid);
rewind(fe);
while((fread(&emp,siz,1,fe))==1)
{
 if(emp.id==tempid)
 {flag=1;
 break;
 }
}
if(flag==1)
 {
 printf("\n\t\tNAME : %s",emp.name);
 printf("\n\n\t\tID : %d",emp.id);
 printf("\n\n\t\tDESIGNATION : %s",emp.desgn);
 printf("\n\n\t\tBRANCH : %s",emp.branch);
 printf("\n\n\t\tSALARY: %.2f",emp.sal);
 printf("\n\n\t\tPRESENT ADDRESS : %s",emp.psaddr);
 printf("\n\n\t\tPERMANANT ADDRESS : %s",emp.prtaddr);
 printf("\n\n\t\tPHONE : %s",emp.phone);
 printf("\n\n\t\tE-MAIL : %s",emp.mail);
 printChar('=',65);
}
else printf("\n\n\t\t!!!! ERROR RECORD NOT FOUND !!!!");
printf("\n\n\t\tWant to enter another search (Y/N)");
fflush(stdin);
another=getchar();
}
}
        
        
        
        
        void displayList(FILE * fe)
{ printHead();
printf("\n\t\t\t\List of Employees");
 Employee emp;
 int i,siz=sizeof(emp);
 rewind(fe);
 while((fread(&emp,siz,1,fe))==1)
 {
 printf("\n\n\t\tID : %d",emp.id);
 printf("\n\n\t\tNAME : %s",emp.name);
 printf("\n\n\t\tDESIGNATION : %s",emp.desgn);
 printf("\n\n\t\tGENDER : %s",emp.gender);
 printf("\n\n\t\tBRANCH : %s",emp.branch);
 printf("\n\n\t\tSALARY : %.2f",emp.sal);
 printf("\n\n\t\tPRESENT ADDRESS : %s",emp.psaddr);
 printf("\n\n\t\tPERMANANT ADDRESS : %s",emp.prtaddr);
 printf("\n\n\t\tPHONE : %s",emp.phone);
 printf("\n\n\t\tE-MAIL : %s\n\n\t",emp.mail);
 printChar('=',65);
 }
 printf("\n\n\n\t");
 printf("\n\n\t");
 system("pause");
}
       //Mycode
       void basiccontact(FILE * fe)
       {
        printHead();
printf("\n\t\t\t\List of Employees");
 Employee emp;
 int i,siz=sizeof(emp);
 rewind(fe);
 while((fread(&emp,siz,1,fe))==1)
 {
 printf("\n\n\t\tID : %d",emp.id);
 printf("\n\n\t\tNAME : %s",emp.name);
 printf("\n\n\t\tGENDER : %s",emp.gender);
 printf("\n\n\t\tBRANCH : %s",emp.branch);
 printChar('=',65);
 }
 printf("\n\n\n\t");
 printf("\n\n\t");
 system("pause");
}
       void maleemp(FILE * fe)
       { printHead();
printf("\n\t\t\t\List male Employees");
 Employee emp;
 int i,siz=sizeof(emp);
 rewind(fe);
 while((fread(&emp,siz,1,fe))==1)
 {
  if(emp.gender=='male')
 printf("\n\n\t\tGENDER : %s",emp.gender);
 printChar('=',65);
 }
 printf("\n\n\n\t");
 printf("\n\n\t");
 system("pause");
}
  void female(FILE * fe)
       {printHead();
printf("\n\t\t\t\List female Employees");
 Employee emp;
 int i,siz=sizeof(emp);
 rewind(fe);
 while((fread(&emp,siz,1,fe))==1)
 {
  if(emp.gender=='female')
 printf("\n\n\t\tGENDER : %s",emp.gender);
 printChar('=',65);
 }
 printf("\n\n\n\t");
 printf("\n\n\t");
 system("pause");
}
        void frmmysore(FILE * fe)
       {
        printHead();
printf("\n\t\t\t\List of Employees from mysore");
 Employee emp;
 int i,siz=sizeof(emp);
 rewind(fe);
 while((fread(&emp,siz,1,fe))==1)
 {
  if(emp.prtaddr=='mysore')
 printf("\n\n\t\tGENDER : %s",emp.prtaddr);
 printChar('=',65);
 }
 printf("\n\n\n\t");
 printf("\n\n\t");
 system("pause");
}
       void frmors(FILE * fe)
       {
        printHead();
printf("\n\t\t\t\List of Employees outside from mysore");
 Employee emp;
 int i,siz=sizeof(emp);
 rewind(fe);
 while((fread(&emp,siz,1,fe))==1)
 {
  if(emp.prtaddr!='mysore')
 printf("\n\n\t\tGENDER : %s",emp.prtaddr);
 printChar('=',65);
 }
 printf("\n\n\n\t");
 printf("\n\n\t");
 system("pause");
}
       void mainbr(FILE * fe)
       {printHead();
printf("\n\t\t\t\List of Employees");
 Employee emp;
 int i,siz=sizeof(emp);
 rewind(fe);
 while((fread(&emp,siz,1,fe))==1)
 {
  if(emp.psaddr=='mysore')
 printf("\n\n\t\tPRESENT ADDRESS : %s",emp.psaddr); 
 printChar('=',65);
 }
 printf("\n\n\n\t");
 printf("\n\n\t");
 system("pause");
}
     void otherbr(FILE * fe)
       {printHead();
printf("\n\t\t\t\List of Employees from other branch");
 Employee emp;
 int i,siz=sizeof(emp);
 rewind(fe);
 while((fread(&emp,siz,1,fe))==1)
 {
  if(psaddr!='mysore')
 printf("\n\n\t\tPRESENT ADDRESS : %s",emp.psaddr);
 printChar('=',65);
 }
 printf("\n\n\n\t");
 printf("\n\n\t");
 system("pause");
}
