// print the factorial of number n
#include<stdio.h>
int main(){
    int n, factorial=1;
    printf("Enter your number:");
    scanf("%d",&n);
    for(int i=1 ; i<=n ;i++){
        factorial = factorial*i;
    }
    printf("factorial is : %d", factorial);
    return 0;
}
//we can only calculate the factrial of small numbers with this 
