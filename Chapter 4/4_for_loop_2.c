// loop character can be float or even character
#include<stdio.h>
int main(){
   for( float i=1.0 ; i<=5.0 ; i++){
        printf("%f \n",i);
    }
    for(char z='a'; z<='z' ; z++){
        printf("%c \n",z);
    }
    return 0;
}