/*
 * You can use the scanf() function to read a string.
 * The scanf() function reads the sequence of characters until it encounters
 * whitespace (space, newline, tab, etc.)
 *
 * Also notice that we have used the code 'name' instead of '&name' with
 * scanf().
 *
 * This is because 'name' is a char array and we know that array names decay to
 * pointers in C
 *
 * Thus, the 'name' in 'scanf()' already points to the address of the first
 * element in the string, which is why we don't need to use &.
 */
#include <stdio.h>

int main() {
  char name[20];
  printf("Enter your name: ");
  scanf("%s", name);
  printf("Your name is %s\n", name);
  return 0;
}
