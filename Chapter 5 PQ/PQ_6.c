// write a function to convert celcius to ferenhite
#include<stdio.h>
float ferenhite(float n);
int main(){
    float n;
    printf("Enter Temp in celcius:");
    scanf("%f",&n);

    printf("Temp in ferenhite: %f",ferenhite(n));

    return 0;
}
float ferenhite(float n){
   
    return n*(9.0/5.0)+32 ; // 9/5 will give 1 
}