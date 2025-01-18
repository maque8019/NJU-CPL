#include<stdio.h>
#include<math.h>
int main(){
  int n;
  int t;
  scanf("%d%d",&n,&t);
  const int base = 10;
  long long int ans = 0;
  long long int lef = 0;
  for(int i = 0;i < n;++i){
    lef += t * pow(base,i);
    ans += lef;
  }
  printf("%llu\n",ans);
  return 0;
}

