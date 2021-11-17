#include "utils.h"

int main() {
  int64_t a = 2;
  int64_t res = 0;
  div_by_2(a,&res);
  if(res == 1)
    return 0;
  else
    return 1;
} 
