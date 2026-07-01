// ptrs can be incremented or decremented 
// ptr++ or ptr--
//ptr++ means ptr ka datatype 1 datatype ke size se badh jayega
//for eg int 4 bytes aage jayega
#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;
    printf("Initial address was: %u\n",ptr);
    ptr++ ;
    printf("increamented address is: %u\n",ptr); //increaed by 4



//we can also subtract one ptr from another
//we can also compare 2 ptrs
int _age = 23;
int *_ptr = &_age ;
printf("%d and %d, Diffrence =%u\n",ptr,_ptr,ptr - _ptr);
printf("comparision = %u\n",ptr == _ptr);

return 0;
}
//float and char arrays unke size se badhegi
//float - 4 bytes and char - 1 bytes  
// while subtracting the pointer datatype should be same
