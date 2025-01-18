#include<stdio.h>
int main(){
    int t,t1;
    scanf("%d\n",&t);
    t1=t;
    int res[t];
    while(t--){
        int n=0;
        scanf("%d\n",&n);
        int A[n];
        for(int i = 0;i < n;++i){
            scanf("%d",&A[i]);
            
        }
        int end=A[n-1];
        int max=A[n-1];
        for(int i=0;i < n-1;++i){
            if(A[i]>max){
                max=A[i]; 
            }
            
        }
        if(end==max){
            res[t]=1;
        }else{
            res[t]=0;
        }
    }
    for(int i=t1-1;i>=0;i--){
        if(res[i]==1){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}
