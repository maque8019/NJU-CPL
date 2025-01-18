#include <stdio.h>
int main() {
  int num;
  scanf("%x", &num);
  int *p = &num;
  float *fp = (float *)p;
  printf("%d\n", *p);
  printf("%u\n", *p);
  printf("%.6f\n", *fp);
  printf("%.4e\n", *fp);
  return 0;
}
