//write a functn that print namaste if indian and bonjour if user is french
#include<stdio.h>
void Namaste();
void Bonjour();
int main(){
    char ch;
    printf("Enter f for french and i for indian :");
    scanf("%c",&ch);

    if(ch == 'i'){
        Namaste();
    }
    else{
        Bonjour();
    }

    return 0;
}
void Namaste(){
    printf("Namaste");
}
void Bonjour(){
    printf("Bonjour");
}