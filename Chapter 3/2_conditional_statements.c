/* if(condn 1){
}
else if (condn 2){
}
else if (condn 3){
}
we can write as much reuired else ifs
and then we can also use else in last 
by this all conditions check ho jayengi 
Note - agar upar wale else if true ho jata hai tab uske neeche wale koi bhi else if check nahi hoga
if we want ki neeche wale bhi check ho tab hum boht sare if ka use karenge

*/
#include<stdio.h>
int main () {
    int age;
    printf("Enter You age:");
    scanf("%d", &age);
    if(age>=18){
        printf("You are an adult");
    }
    else if(age>13 && age<18){
        printf("Teenager");
    }
    else {
        printf("Child");
    }
    return 0;
}
// nested if are allowed