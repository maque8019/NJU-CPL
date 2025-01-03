#include<stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int people[n];
    for(int i = 0;i < n;++i){
        people[i]=1;
    }
    int live=0;
    int lived=0;
    while(lived!=1){
        lived=0;
        for(int i = 0;i < n;++i){
            live+=people[i];
            if(live == k){
                people[i]=0;
                live=0;
            }
            
        }
        for(int i = 0;i<n;++i){
            lived+=people[i];
        }
    }
    for(int i = 0;i < n;++i){
        if(people[i]==1){
            printf("%d ",i+1);
        }
    }
    return 0;
}