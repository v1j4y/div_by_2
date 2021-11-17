#include "utils.h"

void div_by_2(int64_t a, int64_t *res) {
  *res = a << 1;
}

int main() {
  int64_t a = 2;
  int64_t res = 0;
  div_by_2(a,&res);
  printf("A = %ld div by 2 = %ld\n",a,res);
  return 0;
}
