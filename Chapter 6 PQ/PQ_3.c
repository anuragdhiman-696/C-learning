// waf to calculate the sum , product and average of 2 numbers . print the average in main function
#include<stdio.h>
void sumprodandavg(int a,int b,int *sum,int *prod,int *avg);

int main(){
    int a , b,sum , prod , avg;
    printf("Enter 1st number:");
    scanf("%d",&a);

    printf("Enter 2nd number:");
    scanf("%d",&b);

    sumprodandavg(a,b,&sum,&prod,&avg);
    printf("Sum is: %d\nProd is: %d\nAvg is: %d\n",sum , prod , avg);



    return 0;
}

void sumprodandavg(int a,int b,int *sum,int *prod,int *avg){
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2 ;
}