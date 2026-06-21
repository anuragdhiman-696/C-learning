/* 
&& and
|| or
! not 
just like logic gates */
#include<stdio.h>
int main() {
    printf("%d \n",2<3 && 7>6);
    printf("%d \n", ! (3>4)); // bracket is important if you are not using it then it will become (!3) which is 3 not
    return 0;
}