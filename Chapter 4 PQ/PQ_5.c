// Keep taking numbers as input from user until user enters a number which is multiple of 7.
#include<stdio.h>
int main(){
    int n;

    do{
        printf("Enter Number: ");
        scanf("%d",&n);

        if(n % 7 != 0){
            printf("Not divisible by 7, try again\n");
        }

    }while(n % 7 != 0);

    printf("Number is divisible by 7\n");
    return 0;
}