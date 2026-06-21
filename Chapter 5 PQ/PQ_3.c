// write functions to calculate area of a square , a circle , and a rectangle.
#include<stdio.h>
float areaofsquare(float side);
float areaofcircle(float radii);
float areaofrectangle(float a,float b);
int main(){
    float side, radii ,a ,b;
    printf("Enter side :");
    scanf("%f",&side);

    printf("Enter radii:");
    scanf("%f",&radii);

    printf("Enter the length and breath:");
    scanf("%f%f",&a,&b);

    printf("%f \n",areaofsquare(side));
    printf("%f \n",areaofcircle(radii));
    printf("%f \n",areaofrectangle(a,b));



    return 0;
}

float areaofsquare(float side){
    return side*side;
}
float areaofcircle(float radii){
    return 3.14*radii*radii ;
}
float areaofrectangle(float a,float b){
    return a*b ;
}