//write a function to reverse an array
#include<stdio.h>
void reverse(int arr[],int n);
void printarr(int arr[],int n);

int main(){
    int arr[6] = {1,2,3,4,5,6};
    reverse(arr,6);
    printarr(arr,6);
    printf("%d",printarr);

    return 0;
}

void reverse(int arr[],int n){
    for(int i=0; i<(n/2) ; i++){
       int firstvalue = arr[i];
       int secondvalue = arr[n-i-1];
       arr[n-i-1] = firstvalue;
       arr[i] = secondvalue;
        
    }
    
} 

void printarr(int arr[],int n){
    for(int i=0 ; i<n ; i++){
        printf("%d\t",arr[i]);
    }
}