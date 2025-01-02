#include<stdio.h>
int main(){
    int num;
    int ten_digit;
    int sigle_digit;
    int hundred_digit;
    scanf("%d",&num);
    int n;
    if(num>=100){
        n=3;
    }else if(num>=10){
        n=2;
    }
    static char *ones[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
"ten", "eleven", "twelve", "thirteen", "fourteen","fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

static char *tens[] = {"0", "1", "twenty", "thirty", "forty", 
"fifty", "sixty", "seventy", "eighty", "ninety"};
    if(num<20){
        printf("%s",ones[num]);
    }else if(n==3 && num%100==0){
        printf("%s hundred",ones[num/100] );
    }else if(n==2 && num%10==0){
        printf("%s",tens[num/10]);
    }else if(n==3 && num%100<20){
        printf("%s hundred and %s",ones[num/100],ones[num%100]);
    }
    else{
        switch(n){
            case 2:
            ten_digit=num/10;
            sigle_digit=num%10;
            printf("%s-%s",tens[ten_digit],ones[sigle_digit]);
            break;
            case 3:
            hundred_digit=num/100;
            ten_digit=num/10%10;
            sigle_digit=num%100%10;
            printf("%s hundred and %s-%s", ones[hundred_digit], tens[ten_digit], ones[sigle_digit]);
            break;
        }
        }
    return 0;
}