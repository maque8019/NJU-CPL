#include<stdio.h>
#include<math.h>
int main(){
    float P;
    float L;
    float T;
    const float R=8.314;
    scanf("%f%f%f",&P,&L,&T);
    printf("%.4e",P * L*L*L / (R * T));
    return 0;
}