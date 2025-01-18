#include <ctype.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  char *s = (char *)malloc(4096 * sizeof(char));
  fgets(s, 4096, stdin);
  char *str = s;
  int flag = 1;
  for (int i = 0; i < 4096; ++i) {
    if (flag == 1) {
      if (*str == ' ') {
        break;
      }
      if (islower(*str)) {
        *str = toupper(*str);
      }
      flag = 0;

    } else {
      if (*str == ' ') {
        flag = 1;
        str++;
        continue;
      }
      if (isupper(*str)) {
        *str = tolower(*str);
      }
    }
    str++;
  }
  printf("%s", s);
  free(s);
  return 0;
}
