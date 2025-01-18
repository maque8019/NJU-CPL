#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  int t = 0;
  scanf("%d", &t);
  while (t--) {
    char stack[100005];
    char seq[100005];
    scanf("%s", seq);
    size_t length = strlen(seq);
    int j = 0;
    int Flage = 0;
    for (int i = 0; i < length; ++i) {
      if ((seq[i] == ']' || seq[i] == ')' || seq[i] == '}') && j == 0) {
        printf("False\n");
        Flage = 1;
        break;
      } else if (seq[i] == '[' || seq[i] == '(' || seq[i] == '{') {
        stack[j] = seq[i];
        j++;
      } else if (seq[i] == ']' && stack[j - 1] == '[') {
        j--;
      } else if (seq[i] == '}' && stack[j - 1] == '{') {
        j--;
      } else if (seq[i] == ')' && stack[j - 1] == '(') {
        j--;
      } else {
        printf("False\n");
        Flage = 1;
        break;
      }
    }
    if (j != 0 && Flage == 0) {
      printf("False\n");
    } else if (j == 0 && Flage == 0) {
      printf("True\n");
    }
  }
  return 0;
}
