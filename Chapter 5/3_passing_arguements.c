 // function can take value(parameters) and give some value(return value)
// void printHello(); take value and dont return anything
// void printTable(int n); take value and dont return anything but jo number ye lega usme ek number jaroor hoga 'n'
// int sum(inta , intb); int is a return type here cause this function take input and return the sum of both 
#include<stdio.h>

int sum(int a , int b);
int main(){
    int a , b;
    printf("Enter 1st Number:");
    scanf("%d",&a);
    printf("Enter 2nd Number:");
    scanf("%d",&b);
 
    int s = sum(a , b); // sum ko call lagaya and usme sabse pehle pass kiya a and fir b
    printf("Sum is %d",s);
    return 0;
}
int sum(int x , int y){// a ki value x me and b ki value y me store ho jayegi
    return x + y;
}