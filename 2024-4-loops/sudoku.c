#include<stdio.h>
int main(){
  int sudo[9][9];
  int right[9]={0};
  for(int i = 0;i < 9; ++i){
    for(int j = 0;j < 9; ++j){
      scanf("%d",&sudo[i][j]);

    }
  }
  for(int i = 0; i < 9;++i){
    int right[9]={0};
    for(int j = 0;j < 9;++j){
      if(right[sudo[i][j]-1] == 1){
        printf("NO");
        return 0;
      }else{
        right[sudo[i][j]-1] = 1;
      }
    }
  }
   for(int i = 0; i < 9;++i){
    int right[9]={0};
    for(int j = 0;j < 9;++j){
      if(right[sudo[j][i]-1] == 1){
        printf("NO");
        return 0;
      }else{
        right[sudo[j][i]-1] = 1;
      }
    }
  } 
  int row = 0;
  int col = 0;
    while(col < 9){
    int right[9]={0};
   for(int i = row; i < row + 3;++i){
    for(int j = col;j < col + 3;++j){
      if(right[sudo[i][j]-1] == 1){
        printf("NO");
        return 0;
      }else{
        right[sudo[i][j]-1] = 1;
      }
    }
  }
    row+=3;
      if(row >=9){
      row = 0;
    col+=3;
    }
  }
printf("YES");
return 0;
}
