// WAP to check if entered character is uper case or not
#include<stdio.h>
int main() {
    char zee;
    printf("Enter Character:");
    scanf("%c",&zee);
    if(zee>='A' && zee<='Z'){
        printf("Character is Upper case");
    }
    // we can also use asky value of characters like a have 97
    // if(zee>=65 && zee<=90)
    else if(zee>='a' && zee<='z'){
        printf("Character is Lower Case");
    }
    else{
        printf("Not an english alphabet");
    }
    return 0;
}