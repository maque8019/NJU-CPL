#include<stdio.h>
int main(){
    char name[20];
    int pre;
    double frac;
    double factor;
    char unit;
    scanf("%s %d %lf %lf %c",name,&pre,&frac,&factor,&unit);
    printf("%.2s: %d (%.5f) | %.5E %.5f %c\n",name[0],name[1],pre,frac,pre+frac,(pre + frac) * factor,(int)unit-32);
    return 0;
}