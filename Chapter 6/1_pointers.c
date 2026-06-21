//A variable that stores the memory address of another variable
//syntax of pointers
// int *ptr = &a


// * = value at address operator
// & = adress of operator
//jiske samne & laga denge hume uska address mil jayega
// jiske samne * laga dete hai uski value mil jati hai


// int _age = *ptr 
// isse hume ptr me stored address ki value mil jayegi
// &kaddu = kaddu ka address
// *ptr = (value at address) ptr ke andar jo bhi address hai uski value
// *(&age) = age ka address me jiska address hai uski value

#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age ;
    int _age = *ptr ;
    printf("%d\n",age);
    printf("%p\n",ptr);
    printf("%d\n",_age);

    return 0;
}  