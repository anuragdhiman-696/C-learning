// just like BODMAS we have 
// *,/,% > +,- > =
#include<stdio.h>
int main() { 
    int a = 3+4*2;
    printf("%d \n", a);

// but if any int have same priority operators then go left to right

    int b = 4*3/6*5;
    printf("%d \n", b);

// but if something is in braket then it will solve first
  int c =  5*(2/2)*3 ;
    printf("%d \n", c);
    return 0;
}