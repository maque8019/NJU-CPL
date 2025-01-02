#include<stdio.h>
#include<math.h>
int main(){
    double PI=log(pow(5280,3)*pow(236674+30303*sqrt(61.0),3)+744)/sqrt(427.0);
    double quarterPI=6*atan(1.0/8.0)+2*atan(1.0/57.0)+atan(1.0/239.0);
    printf("%.15f\n",PI);
    printf("%.15f\n",4*quarterPI);
    return 0;
}