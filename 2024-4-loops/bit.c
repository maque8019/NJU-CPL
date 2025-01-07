#include<stdio.h>
int main()
{
  int a;
  int b;
  scanf("%d%d",&a,&b);
  int res=0;
  printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n",a&b,a | b,a^b,~a,a<<b,a>>b,a>>b&1);
  while(a){
    res+=a&1;
    a>>=1;
    }
  printf("%d\n",res);

  return 0;
}
