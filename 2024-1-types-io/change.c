#include<stdio.h>
int main(){
    int change;
    scanf("%d",&change);
    int fifty_rmb=change/50;
    int twenty_rmb=(change-fifty_rmb*50)/20;
    int ten_rmb=(change-fifty_rmb*50-twenty_rmb*20)/10;
    int five_rmb=(change-ten_rmb*10-twenty_rmb*20-fifty_rmb*50)/5;
    int one_rmb=change-fifty_rmb*50-twenty_rmb*20-ten_rmb*10-5*five_rmb;
    printf("%d\n%d\n%d\n%d\n%d\n",fifty_rmb,twenty_rmb,ten_rmb,five_rmb,one_rmb);
    return 0;
    
}