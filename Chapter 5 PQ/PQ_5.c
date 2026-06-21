// find factorial of n using recurssion
#include<stdio.h>
int fact(int n);
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    printf("factorial is: %d",fact(n));

    return 0;
}
int fact(int n){
    if(n==1){
        return 1;
    }
    int factorial = fact(n-1);
    return factorial*n;
}