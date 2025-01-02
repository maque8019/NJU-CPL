#include<stdio.h>
int main(){
    int num=0;
    scanf("%d",&num);
    int res=0;
    while(num!=495){
        int n1,n2,n3;
        n1=num/100;
        n2=num%100/10;
        n3=num%10;
        int n[6]={n1*100+n2*10+n3,n1*100+n3*10+n2,
        n2*100+n1*10+n3,n2*100+n3*10+n1,
        n3*100+n2*10+n1,n3*100+n1*10+n2};
        int max=0;
        int min=1000;
        for(int i=0;i<6;++i){
            if(n[i]>max){
                max=n[i];
            }
            if(n[i]<min){
                min=n[i];
            }
        }
        int newNum=max-min;
        if(num-newNum>0){
            res+=num-newNum;
        }
        num=newNum;
    }
    printf("%d",res);

    return 0;
}