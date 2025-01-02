#include<stdio.h>
#include<math.h>
int main(){
    float x =  pow(-1/2.0 + sqrt(pow(1/2.0,2)+pow(1/3.0,3)),1.0/3.0)+pow(-1/2.0 - sqrt(pow(1/2.0,2) + pow(1/3.0,3)),1.0/3.0);
    printf("%.3f \n",x);
    printf("%.3f \n",-1/2.0-sqrt(pow(1/2.0,2)+pow(1/3.0,3)));
    return 0;
}