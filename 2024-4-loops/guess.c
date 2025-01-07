#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include<stdbool.h>
int main(){
  char res[10];
  long long unsigned int left = 0;
  long long unsigned int right = pow(2,32);
  long long unsigned int guess = pow(2,16);
  while(true){
    printf("%llu\n",guess);
    fflush(stdout);
    scanf("%s",res);
    switch (res[0]){
      case 'G':{
        right = guess;
        guess = (right + left)>>1+1;

        break;
      }
      case 'L':{
        left = guess;
        guess = (right + left)>>1;
        break;
      }
      case 'E':{
        return 0;
      }
      case 'O':{
        return 0;
      }
    }

  }
}
