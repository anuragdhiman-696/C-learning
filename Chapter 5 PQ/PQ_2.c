// use library function to calculate the square of a number given by the user
#include<stdio.h>
#include<math.h>

int main(){
    float a;
    printf("Enter the number :");
    scanf("%f",&a);
    printf("Square is %f" ,pow(a,2));

    return 0;
}