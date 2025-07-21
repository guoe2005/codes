#include <stdio.h>
int a = 2; // a 声明在sum函数后
int sum(int x) { return x + a; }

int main() {
  int b = 2;

  printf("%d", sum(b));
  return 0;
}
}
