//Write a c program to print the given message

#include<stdio.h>
int main(){
    char message[100];
    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);
    printf("the message is:  %s\n",message);
    return 0;
}