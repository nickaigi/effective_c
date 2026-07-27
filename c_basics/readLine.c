#include <stdio.h>
int main() {
  char name[30];
  printf("Enter name (30 chars MAX): ");
  fgets(name, sizeof(name), stdin);
  printf("Name: ");
  puts(name);
  return 0;
}
