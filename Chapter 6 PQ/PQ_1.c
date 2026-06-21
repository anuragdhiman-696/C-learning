//print the value of 'i' from its ptr to ptr(using ptr to ptr print the value of i)
//hint - we only have ptr to ptr 
#include<stdio.h>
int main(){
    int i=10;
    int *ptr = &i ;
    int **pptr = &ptr;
    printf("%u\n",pptr);
    printf("%d\n",*(*pptr));

    return 0;
}