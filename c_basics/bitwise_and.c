#include <stdio.h>

int main() {
  int a = 12; // Binary 00001100
  int b = 25; // Binary 00011001
  // 00001100  &
  // 00011001
  // -----------
  // 00001000  -> (Decimal 8)
  int result = a & b;
  printf("Result of %d & %d = %d\n", a, b, result);
  return 0;
}
