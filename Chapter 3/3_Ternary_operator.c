// condition ? do something if TRUE : do something if FALSE
// colon means if not here
#include<stdio.h>
int main() {
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    age >= 18 ? printf("You are an adult") : printf("You are a Minor");
    

    return 0;
}