/* switch(number){
 case 1 : //do something
 break;
 case 2 : // do something
 break;
 case 3 : // do something
 break;
} 
if break isnt there then all swith after it will be turned on*/
#include<stdio.h>
int main() {
    int day=2;
   
    switch(day) {
    case 1 : printf("Monday \n");
        break;
    case 2 : printf("Tuesday \n");
        break;
    case 3 : printf("Wednesday \n");
        break;
    case 4 : printf("thursday \n");
        break;
    case 5 : printf("friday \n");
        break;
    case 6 : printf("saturday \n");
        break;
    case 7 : printf("sunday \n");
        break;
    }
     return 0;
}
// we can also use character for this
/*
char day = 'f';
switch(day) {
case 'm' : printf("monday \n");
break;
case 't' : printf("tuesday \n");
break;
case 'w' : printf("wednesday \n");
break;
case 'T' : printf("thursday \n");
break;
case 'f' : printf("friday \n");
break;
case 's' : printf("saturday \n");
break;
case 'S' : printf("sunday \n");
break; 
*/
// Switch inside switch is allowed (nested switch)