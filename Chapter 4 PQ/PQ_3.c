// print the table of a number entered by the user
#include<stdio.h>
int main() {
    int n;
    printf("Enter Your Numeber:");
    scanf("%d",&n);

    int multiply=1;
    for(int i=1 ; i<=10 ; i++){
        printf("%d \n",n*i);
    }
}