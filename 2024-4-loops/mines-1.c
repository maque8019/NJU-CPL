#include <stdio.h>
int main(void)
{
  int vectors[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
  int count = 0;
  int n = 0;
  scanf("%d",&n);
  char mines[n][n+1];
  for(int i = 0;i<n;++i){
    fgets(mines[i],sizeof(mines[i]),stdin);

  }
  for(int i = 0;i < n;++i){
    printf("%s",mines[i]);
  }
  return 0;
}
