#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
bool is_ternary(char c) {
  if (c == 'Z' || c == '1' || c == '0') {
    return true;
  } else {
    return false;
  }
}
int calculate(char c) {
  if (c == 'Z') {
    return -1;
  } else if (c == '1') {
    return 1;
  } else {
    return 0;
  }
}
int main() {
  int n = 0;
  scanf("%d", &n);
  while (n--) {
    char c[20];
    int res = 0;
    scanf("%s", c);
    int length = strlen(c);
    int len = length;
    bool flag = true;
    for (int i = 0; i < length; ++i) {

      if (is_ternary(c[i])) {
        res += calculate(c[i]) * pow(3, len - 1);
      } else {
        flag = false;
        printf("Radix Error\n");
        break;
      }
      len--;
    }
    if (flag) {
      printf("%d\n", res);
    }
  }
  return 0;
}
