//strings- a character array terminated by a '\0' (null character)
//null character denotes sting termination
#include<stdio.h>
int main(){
    char name[] = {'R','A','M','U'};
    // char class[] = {'S','V','M','','C','O','L','L','E','G','E','\0'}
    printf("%c\n",name);

    return 0;
}
//in memory '\0' also take memory of 1 box 