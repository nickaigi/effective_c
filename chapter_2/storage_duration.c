/*
 * storage duration determines an objects lifetime.
 * options are:
 *  - automatic: lifetime begins when the block in which they are declared begins execution
 *  - static
 *  - thread
 *  - allocated
*/

#include <stdio.h>

void increment(void){
  static unsigned int counter = 0;
  counter++;
  printf("%d ", counter);
}

int main(void){
  for (int i = 0;i < 5;i++) {
    increment();
  }
  return 0;
}
