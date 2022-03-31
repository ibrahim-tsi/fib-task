#include "fibby.hpp"
#include <iostream>

int fibby(int n) {
  if (n == 0)
    return 0;
  
  if (n == 1)
    return 1;

  return fibby(n - 2) + fibby(n - 1);
}

void print_fibby(int n) {
  for (int i = 0; i < n; i++) {
    std::cout << fibby(i) << std::endl;
  }
}