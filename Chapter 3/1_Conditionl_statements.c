/* format - if(condition){
}
else {
} 
*/
#include<stdio.h>
int main() {
    int age;
    printf("Enter your age :");
    scanf("%d", &age);
    if (age>18){ // curly braces arent imp if we are writing only just one statement
        printf("You are an adult \n");// 1st statement
        printf("You can vote\n ");
        printf("You can drive \n");
    }
    else{
        printf("You arent an adult");
    }
    return 0;
}