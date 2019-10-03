#include <stdio.h>

long computeXOR(const int n){
  switch(n & 3){
    case 0: return n;
    case 1: return 1;
    case 2: return n+1;
    case 3: return 0;
  }
}

long computAtoNXOR(cosnt int a, cosnt int n){
  return ((a-1)^1)^(1^n);
}
