#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool isPrime(int x);
int invert(int x);
int main(){
  int n;
  scanf("%d",&n);
  int ans = 0;
  for(int i = 2; i <= n; ++i){
    if(isPrime(i) && isPrime(invert(i))){
      ans++;
    }
  }
  printf("%d\n",ans);

  return  0;

}
int invert(int x){
  int num[5];
  int i = 0;
  int ans = 0;
  int j = 0;
  while(x != 0){
    num[i] = x % 10;
    x = x / 10;
    i++;

  }
  while(i != 0){
    i--;
    ans+=pow(10,i)*num[j];
    j++;
  }
  return ans;
}
bool isPrime(int x){
  int flag = 1;
  for(int i = 2; i <= sqrt(x + 0.5); ++i){
    if(x % i ==0){
      flag = 0;
    }
  }
  return flag;
}
