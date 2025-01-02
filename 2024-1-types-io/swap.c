#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);

    int units_digit=num%10;
    int hundreds_digit=num/100;
    int tens_digit=num-hundreds_digit*100-units_digit;
    printf("%d\n",hundreds_digit+tens_digit+units_digit*100);

    return 0;
}