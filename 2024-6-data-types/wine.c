#include <stdio.h>
int findMaxValue(int wineValue[], int n) {
  int maxValue = wineValue[0];
  int index = 0;
  for (int i = 1; i < n; ++i) {
    if (wineValue[i] > maxValue) {
      maxValue = wineValue[i];
      index = i;
    }
  }
  return index;
}
int main() {
  int n = 0;
  int L = 0;
  int ans = 0;
  int wineValue[10005];
  int wineCapacity[10005];
  scanf("%d%d", &n, &L);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &wineValue[i]);
  }
  for (int i = 0; i < n; ++i) {
    scanf("%d", &wineCapacity[i]);
  }
  while (L != 0) {
    int i = findMaxValue(wineValue, n);
    if (L >= wineCapacity[i]) {
      L -= wineCapacity[i];
      ans += wineCapacity[i] * wineValue[i];
    } else {
      ans += L * wineValue[i];
      L = 0;
    }
    wineValue[i] = 0;
  }
  printf("%d\n", ans);
  return 0;
}
