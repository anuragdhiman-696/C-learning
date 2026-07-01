//WAF to count the numbers of odd numbers in an array
#include<stdio.h>
int countodd(int arr[],int n);

int main(){
    int arr[6] ;
    for(int i=0 ; i<6 ; i++){
        printf("Enter Number:");
        scanf("%d",&arr[i]);
    }

    printf("The total odd numbers:%d",countodd(arr,6));

    return 0;
}

int countodd(int arr[],int n){
    int count = 0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]%2 != 0){
            count++;
        }
    }
    return count ;
}