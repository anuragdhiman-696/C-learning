// a variable that stores the momory address of another ptr
// syntax -
// int **a or char **a or float **a
#include<stdio.h>
int main(){
    float price=100;
    float *ptr = &price;
    float **pptr = &ptr;
    printf("%u\n",ptr);
    printf("%u\n",pptr);
    return 0;
}