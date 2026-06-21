// waf to calculate percentage of a student from marks of science , maths and sanskrit
#include<stdio.h>
float percentage(float m,float sc,float s);
int main(){
    float a,b,c;
    printf("Enter Marks of Maths:");
    scanf("%f",&a);
    printf("Enter Marks of Science :");
    scanf("%f",&b);
    printf("Enter Marks of Sanskrit :");
    scanf("%f",&c);

    printf("Total Percentage is :%f",percentage(a,b,c));

    return 0;
}
float percentage(float m,float sc,float s){
    return (m+sc+s)/3.0;
}