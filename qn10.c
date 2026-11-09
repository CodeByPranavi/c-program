#include<stdio.h>
int main(){
 char empname[20];
 int empid;
 char dept[50];
 printf("Enter name:");
 fgets(empname,sizeof(empname),stdin);
 printf("Enter id:");
 scanf("%d",&empid);
 getchar();
 printf("Enter department:\n");
 fgets(dept,sizeof(dept),stdin);

 printf("Employee details:\n");
 printf("Employee name: %s\n",empname);
 printf("ID: %d\n",empid);
 printf("Department: %s\n",dept);
 return 0;
}