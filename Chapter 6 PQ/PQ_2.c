// swap 2 numbers a and b
// we will use call by reff cuz we have to change the passed variables
#include<stdio.h>
void _swap(int *a,int *b);

int main(){
    int x,y;
    printf("Enter x :");
    scanf("%d",&x);
    printf("Enter y :");
    scanf("%d",&y);

    _swap(&x,&y);

    printf("x is now: %d, y is now:%d",x,y);

    return 0;
}

void _swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}