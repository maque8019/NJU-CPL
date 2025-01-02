#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    scanf("%d",&n);
    int num[1000005];
    int singleNum[1000005];
    for(int i=0;i<2*n-1;++i){
        scanf("%d",&num[i]);
    }
    for(int i=0;i<1000005;++i){
        singleNum[i]=0;
    }
    for(int i=0;i<2*n-1;++i){
        singleNum[num[i]]+=1;
    }
    for(int i=0;i<1000005;++i){
        if(singleNum[i]%2==1){
            printf("%d",i);
            }

    }
    return 0;
    
}