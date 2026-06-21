// wap to check if a studet is passed or fail
#include<stdio.h>
int main() {
    int marks;
    printf("Enter Marks:");
    scanf("%d", & marks);
    if(marks>30 && marks<=100){
         printf("passed");
    } else if(marks<=30 && marks>=0){
        printf("Failed");
    } else{
        printf("Invalid Marks");
    }
    }