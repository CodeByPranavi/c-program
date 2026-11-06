//Write a c program to print the given fractional number in 2 digit decimal format 
#include<stdio.h>
int main(){
    float num;
    printf("Enter a number:");
    scanf("%f", &num);
    printf("The number in 2 digit decimal format is: %.2f", num);
    return 0;
}
