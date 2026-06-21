// write a program to check if a number is divisible by 2 or not
//WAP to find if a number is odd or even
#include<stdio.h>
int main () { 
    int a;
    printf("Enter Number :");
    scanf("%d",&a);
    int b = a%2;
    printf("%d",b==0);
    // or without b printf("%d", a%2 ==0)


    return 0;
}