//wap to enter price of 3 items and print their final cost with gst
#include<stdio.h>
void finalprice(float a, float b, float c);
int main(){
    float price[3] ;
    printf("Enter Price of item first :");
    scanf("%f",&price[0]);
    printf("Enter Price of item second :");
    scanf("%f",&price[1]);
    printf("Enter Price of item third :");
    scanf("%f",&price[2]);

    finalprice(price[0],price[1],price[2]);


    return 0;
}
void finalprice(float a, float b, float c){
    a = a*0.18 + a;
    b = b*0.18 + b;
    c = c*0.18 + c;
    
    printf("final prices are %f\n%f\n%f\n",a,b,c);
}