//print the sum of first n natural numbers
#include<stdio.h>
int main(){
    int n;
    printf("Enter Number:");
    scanf("%d", &n);
    int sum =0;
    for(int i=1 ; i<=n ; i++ ){
        sum = sum +=i;  //sum = sum+i
    }
    printf("sum is : %d \n", sum);

    // for(int i=n ; i>=1 ; i--){
    //     printf("%d \n",i);
    // }
    // we can do the both works in a single loop
    // for(int i=1 , j=n ; i<=n && j>=1 ; i++,j--){
    //     sum = sum + i;
    //     printf("%d \n",j);
    // }
    // printf("sum is : %d \n", sum);
    
    return 0;
}
// Note- the declared variable inside the loop is only in it outside it the compiler dont know what is i
// also we can only use j to do it all for eg
// for(int j=n ; j>=1 ; j--){
//     sum += j;
// }
// printf("Sum is: %d", sum);