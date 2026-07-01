//function declaration
// void printNumbers(int aa[],int n)  = size jo hai wo int n batayega
// OR void printNumbers(int *arr,int n)

//function call
// printNumbers(arr,n)
#include <stdio.h>
void printNumbers(int arr[], int n);
int main() {
int arr[] = {1,2,3,4,5,6};

printNumbers(arr,6);

return 0;
}
void printNumbers(int arr[], int n) {
for(int i=0; i<n; i++) {
printf("%d \t", arr[i]);// \t makes a gap between numbers
}
}