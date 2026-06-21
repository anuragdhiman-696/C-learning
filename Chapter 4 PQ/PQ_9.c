// print the reverse table of number entered by user
#include<stdio.h>
int main() {
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(int i=10;i>=1;i--){
        int tab=1;
        tab = i*n;
        printf("%d \n", tab);// printf("%d \n", i*n)
    }
    return 0;
}