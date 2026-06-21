// wap to check if given character is digit or not
#include<stdio.h>
int main () {
    char ch;
    printf("Enter to check if its a digit:");
    scanf("%c",&ch);

    if(ch>='0' && ch<='9'){
        printf("You entered a digit");
    }
    else{
        printf("You doesnt entered a digit");
    }
    
    return 0;
}