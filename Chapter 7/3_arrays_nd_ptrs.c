//array is a pointer
// int *ptr = &arr[0] or int *ptr = arr;
//both are same cuz arr is a ptr that pts on the 0th location
#include<stdio.h>
int main(){
    int marks[] = {97,98,99};
    int *ptr = marks;

    printf("%u\n",ptr);
    printf("%u\n",&marks[0]);

    return 0;
}