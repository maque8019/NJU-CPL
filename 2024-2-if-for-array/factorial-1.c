#include<stdio.h>
#include<stdint.h>
int main(){
    int n;
    const int dividend=10007;
    int64_t factorial[25];
    scanf("%d",&n);
    factorial[0]=1;
    factorial[1]=1;
    for(int i=2;i<=n;++i){
        factorial[i]=(factorial[i-1]*i)%dividend;
    }
    int64_t res=0;
    for(int i=1;i<=n;++i){
        res+=factorial[i] ;
    }
    printf("%ld",res%dividend);
    
    return 0;
}