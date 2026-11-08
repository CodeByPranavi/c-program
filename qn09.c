#include<stdio.h>
int main(){
    char name[20];
    long int regno;
    char dept[20];
    printf("Enter name:");
    fgets(name,sizeof(name),stdin);
    printf("Enter reg no:");
    scanf("%ld",&regno);
    getchar();
    printf("Enter department:");
    fgets(dept,sizeof(dept),stdin);
    printf("%s\n",name);
    printf("%ld\n",regno);
    printf("%s\n",dept);
    return 0;

}