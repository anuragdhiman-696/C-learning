// print the numbers from 0 to n if n is given by the user
#include<stdio.h>
int main() {
    int a=0,b;
    printf("Enter your Number:");
    scanf("%d", &b);
    for(a=0 ; a<=b ; a++){
        printf("%d \n",a);
    }
    // while(a<=b){
    //     printf("%d \n",a);
    //     a++;
    // }
    return 0;

}