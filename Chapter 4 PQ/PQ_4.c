//keep taking number as input from user until user enters an odd number
#include<stdio.h>
int main(){
    int i;
    do{ 
        printf("Enter Number:");
        scanf("%d", &i);
        if(i%2!=0){
            break;
        }
        if(i%2==0){
            printf("Entered number is even\n");
        }
        
    i++;
    }while(1);
    return 0;
}