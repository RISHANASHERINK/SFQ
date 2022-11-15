#include <stdio.h>

void RSK(int a) {
  printf("a in R  = %d\n",a);
  a=55;
  printf("a in S  = %d\n",a);
}

void main() { 
int a=3;
  printf("a in K = %d\n", a);
  RSK(a); 
  printf("a in K = %d\n", a);
}
