//func - block of code that performs particular task
// take input -> do work -> result
// it can be use multiple times
// agar kisi code me same cheeze 3 ya usse jyada krni pad rahi hai to use funcn bna do

//syntax 1 
// void nameoffunction();
// void means our function will do work but will not return anything

//syntax 2 function defination
// void printHello(){
//       printf("hello");
//   }

//syntax 3 funtion call
// int main(){
// printHello();
// return 0;
// }

//genrally function ko main function ke baad hi define krte hai

#include<stdio.h>

void printHello(); //declaration or prototype

int main(){
    printHello(); // calling
 
    return 0;
}

void printHello(){ // function defination
    printf("Hello! \n");
    printf("Have a GooN daY \n");
}

//Note : compiler always go to main function to do what we told it