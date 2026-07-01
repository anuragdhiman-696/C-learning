//we can use loop to travel in any array
#include<stdio.h>
int main(){
    int aadhaar[12] ;
    for(int i=0 ; i<12 ; i++){
        printf("digit number %d of aadhar:",i+1);
        scanf("%d",&aadhaar[i]);
    }

    printf("Your aadhar Number is:");
    for(int i=0 ; i<12 ; i++){
        printf("%d",aadhaar[i]);
    }

    
    return 0;
}