// WAP to give grades to a student
 #include<stdio.h>
 int main() {
    int marks;
    printf("Enter Marks:");
    scanf("%d",&marks);
    if(marks>=90 && marks<=100){
        printf("A+");
    }
    else if (marks>=80 && marks<=90){
      printf("B");
    }
    else if(marks>=60 && marks<80){
      printf("C");
    }
    else{
      printf("D");}
    

    return 0;
 }