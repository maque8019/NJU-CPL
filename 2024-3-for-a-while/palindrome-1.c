#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    int i=0;
    int j = n-1;
    while(i !=j+1 && i!=j){
        if(str[i]=='?'){
            str[i]=str[j];
        }
        if(str[j]=='?'){
            str[j]=str[i];
        }
        i++;
        j--;
    }
    printf("%s",str);
    return 0;
}