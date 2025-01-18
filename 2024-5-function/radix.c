#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int nBaseToDecimal(char num[], int base) {
  int length = 0;
  length = strlen(num);
  int decimalValue = 0;
  for (int i = 0; i < length; ++i) {
    int digitValue = num[i] - '0';
    decimalValue += digitValue * pow(base, length - 1 - i);
  }
  return decimalValue;
}
int minDecimalNum(char p[], char q[], char r[]) {
  int maxValue = 0;
  int lenp = strlen(p);
  int lenq = strlen(q);
  int lenr = strlen(r);

  for (int i = 0; i < lenp; ++i) {
    if (p[i] > maxValue) {
      maxValue = p[i];
    }
  }
  for (int i = 0; i < lenq; ++i) {
    if (q[i] > maxValue) {
      maxValue = q[i];
    }
  }
  for (int i = 0; i < lenr; ++i) {
    if (r[i] > maxValue) {
      maxValue = r[i];
    }
  }
  return maxValue - '0';
}
int main(void) {
  char p[10], q[10], r[10];
  scanf("%s%s%s", p, q, r);
  int minValue = minDecimalNum(p, q, r);
  int intr = atoi(r);
  for (int i = minValue + 1; i < 100; ++i) {
    if (nBaseToDecimal(p, i) * nBaseToDecimal(q, i) == nBaseToDecimal(r, i)) {
      printf("%d\n", i);
      return 0;
    }
  }
  printf("%d\n", 0);
  return 0;
}
