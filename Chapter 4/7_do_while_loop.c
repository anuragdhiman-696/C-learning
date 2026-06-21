// do{
//     do something
//     updation condn
// }while(codn)
#include<stdio.h>
int main() {
    int a=1;
    do{
        printf("Hello World \n");
        a++;
    }while(a<=5);
    return 0;
}
// for infinite loop we have to remove the updation condition cuz if i didnt plus then i is always less than 5 and its true so program will keep printing
