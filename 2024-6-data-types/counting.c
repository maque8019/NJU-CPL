#include <stdbool.h>
#include <stdio.h>
bool is_angle(char graph[101][101], int r, int c, int i, int j) {
  if (i == r - 1 || j == c - 1) {
    return false;
  }
  if (graph[i][j] == '/' && graph[i][j + 1] == '\\') {
    return true;
  }
  return false;
}
bool is_square(char graph[101][101], int num, int i, int j) {
  for (int k = 0; k < num; ++k) {
    if (graph[i + k][j - k] != '/' || graph[i + k][j + 1 + k] != '\\') {
      return false;
    }
    if (graph[i + 2 * num - 1 - k][j - k] != '\\' ||
        graph[i + 2 * num  - 1 - k][j + 1 + k] != '/') {
      return false;
    }
  }
  return true;
}
int main() {
  int r, c, ans = 0;
  r = 6;
  c = 6;
  char graph[101][101] = {
    {'\\', '\\', '/', '\\','/','\\'},
    {'\\', '/', '\\', '/','\\','\\'},
    {'/', '\\', '\\', '\\','/','\\'},
    {'\\', '\\', '\\', '\\','\\','/'},
    {'\\','\\','\\','\\','/','\\'},
    {'\\','\\','\\','/','\\','\\'
   }
  } ;
  //scanf("%d%d", &r, &c);
  /*for (int i = 0; i < r; ++i) {
        scanf("%s", graph[i]);
      }*/
  for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
      bool isAngle = is_angle(graph, r, c, i, j);
      if(isAngle) {
      int num = (j + 1 < c - j - 1)
                    ? (j + 1 < r - i - 1 ? j + 1 : r - i - 1)
                    : (c - j - 1 < r - i - 1 ? c - j - 1 : r - i - 1);
      while (num--) {
        if (is_square(graph, num+1, i, j)) {
          ans++;
        }
      }
      }
    }
  }
  printf("%d\n", ans);
  return 0;
}
