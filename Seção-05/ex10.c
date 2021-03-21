// 16.03.2021

#include <stdio.h>

int main(void) {

  int a1 = 2;
  int a50, sn;
  int n = 50;
  int r = 2;
  puts("Soma 50 números pares\n");
  
  a50 = a1 + (n - 1) * r;  
  
  sn = (a50 + a1) * n / 2;

  printf("Total: %d\n", sn);
  return 0;
}
