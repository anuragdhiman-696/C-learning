// waf to print nth term of fibonacci series
#include<stdio.h>
int fibonacci(int n);
int main(){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);

    printf("%dth term of fibonacci is :%d",n,fibonacci(n));

    return 0;
}
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int f = fibonacci(n-1)+fibonacci(n-2);
    return f;
} 