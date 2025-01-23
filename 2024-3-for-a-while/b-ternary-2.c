
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
bool is_valid(char c) {
  if ('0' <= c && c <= '9') {
    return true;
  } else {
    return false;
  }
}
void decimalToTernary(int decimal, char ternary[]) {
  int i = 0;
  while (decimal != 0) {
    ternary[i] = (char)((decimal % 3)+'0');
    decimal = decimal / 3;
    ++i;
  }
}
void reverse(char s[]) {
  int length = strlen(s);
  for (int i = 0; i < length / 2; ++i) {
    char temp = s[i];
    s[i] = s[length - i - 1];
    s[length - i - 1] = temp;
  }
}
int main() {
  int n = 6;

  //scanf("%d", &n);
  while (n--) {
    char num[20]={'6'};
    //scanf("%s", num);
    int length = strlen(num);
    bool flag = true;
    if (num[0] == '-') {
      for (int i = 1; i < length; ++i) {
        if (is_valid(num[i])) {
          continue;
        } else {
          printf("Radix Error\n");
          flag = false;
          break;
        }
      }
    } else {
      for (int i = 0; i < length; ++i) {
        if (is_valid(num[i])) {
          continue;
        } else {
          printf("Radix Error\n");
          flag = false;
          break;
        }
      }
    }
    if (flag) {
      int decimal = abs(atoi(num));
      if(decimal == 0){
        printf("0\n");
        continue;
      }
      char ternary[30] ={0};
      char b_ternary[30] ={0};
      decimalToTernary(decimal, ternary);
      int ter_len = strlen(ternary);
      int offset = 0;
      ternary[ter_len] = '0';
      for (int i = 0; i <= ter_len; ++i) {
        if (ternary[i] == '1' || ternary[i] == '0') {
          if (offset == 1 || i<ter_len) 
          {
           b_ternary[i] = ternary[i];
          }
        } else if (ternary[i] == '2') {
          if(i ==ter_len -1){
            offset = 1;
          }
          b_ternary[i] = 'Z';
          ternary[i + 1] = (char)(ternary[i + 1] + 1);

        } else {
          if(i ==ter_len -1){
            offset = 1;
          }
          b_ternary[i] = '0';
          ternary[i + 1] = (char)(ternary[i + 1] + 1);
        }
      }
      if (num[0] == '-') {
        char _b_ternary[30] ={0};
        int b_ter_len = strlen(b_ternary);
        for (int i = 0; i < b_ter_len; ++i) {
          if (b_ternary[i] == '1') {
            _b_ternary[i] = 'Z';

          } else if (b_ternary[i] == 'Z') {
            _b_ternary[i] = '1';
          } else {
            _b_ternary[i] = b_ternary[i];
          }
        }
        reverse(_b_ternary);
        printf("%s\n", _b_ternary);
      } else {
        reverse(b_ternary);
        printf("%s\n", b_ternary);
      }
    }
  }
  return 0;
}
