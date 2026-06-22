#include <stdio.h>

void swap(int*, int*);

int main(int argc, char *argv[])
{
  int a = 21;
  int b = 17;

  swap(&a, &b);
  printf("a= %d, b = %d\n", a, b);
  return 0;
}

void swap(int *pa, int *pb){
  int t = *pa;
  *pa = *pb;
  *pb = t;
}
