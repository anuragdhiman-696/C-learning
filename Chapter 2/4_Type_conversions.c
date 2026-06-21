/* if we do some airthmetic opertion between int and float then output will be float i.e */
#include<stdio.h>
int main() {
    // shouldnt be printf("%d", 2.0*2);
    printf("%f", 2.0*2);
    return 0;
}