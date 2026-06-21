// int *ptr ;
// char *ptr;
// float *ptr;
// format specifier -
// cannot use always %d inside print functn
// so we use %p - pointer address
//and %u - unsigned int (ptr address ajeeb na dikhe isiliye)
#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age ;
    int _age = *ptr ;
    printf("%p\n",&age);
    printf("%u\n",&age);

    return 0;
}