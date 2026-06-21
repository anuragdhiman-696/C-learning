// i++ means use then increase(post increment)
// ++i means increase then use(pre increment)
// i-- post decrement
// --i pre decrement
#include<stdio.h>
int main(){ 
    int i=1;
    printf("%d \n",i++);
    printf("%d \n",i); // i++ increased the value of i

    printf("%d \n",++i);
    return 0;
}