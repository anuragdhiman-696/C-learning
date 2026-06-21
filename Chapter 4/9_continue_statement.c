// skip to next iteration
#include<stdio.h>
int main(){
    for(int i=1; i<=5; i++){
        if(i==3){ //skip 3
            continue;
        }
        printf("%d \n",i);
    }
    return 0;
}