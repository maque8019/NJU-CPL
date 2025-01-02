#include<stdio.h>
int main(){
    int max;
    scanf("%d",&max);
    int all[100001];
    int plant=0;
    for(int i=0;i<=max;++i){
        scanf("%d",&all[i]);
        
    }
    int stdup=all[0];
    for(int i=1;i<=max;++i){
        if(stdup<i &&all[i]!=0){
            plant+=i-stdup;
            stdup=i+all[i];
        }else{
            stdup+=all[i];
        }
    }
    printf("%d\n",plant);
    
    
    return 0;
}


