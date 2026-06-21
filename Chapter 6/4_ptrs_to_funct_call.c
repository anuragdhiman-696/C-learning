// 1.call by value - We pass value of variable as arguement
// 2.call by reffrence - We pass addrress of variable as arguement
#include<stdio.h>
void square(int n);
void _square(int *n);

int main(){
    int number = 4;
    square(number);
    printf("Number = %d\n",number);


    _square(&number);
    printf("number = %d\n", number);// address me chhed chhad krne par number change ho jayega
    
    return 0;
}
//call by value
void square (int n) {
n = n * n;
printf("square = %d\n", n);
}
// call by reffrence
void _square(int *n) {
*n = (*n) * (*n);
printf("square = %d\n", *n);
}