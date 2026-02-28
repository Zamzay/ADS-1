// Copyright 2022 NNTU-CS
#include "alg.h"
#include <math.h>
#include <cstdint>



bool checkPrime(uint64_t value) {
  if (value == 1) return false;
  for (uint64_t i = 2; i <= sqrt(value); i++) {
    if (value % i == 0) return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n == 1) {
    return 2
      }
  if (n > 1) {
    uint64_t x = 0, i;
    for (i = 2; x != n; i++) {
      if (checkPrime(i)) x++;
    }
    return i - 1;
  }
  return 2
}

uint64_t nextPrime(uint64_t value) {
  uint64_t i;
  for (i = value + 1; ; i++) {
    if (checkPrime(i)) return i;
  }
  return 2;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0, i;
  for (i = 2; i < hbound; i++) {
    if (checkPrime(i)) sum += i;
  }
  return sum;
}

uint64_t twinPrimes(uint64_t lbound, uint64_t hbound) {
  uint64_t sum = 0, i;
  for (i = lbound; i < hbound - 2; i++) {
    if (checkPrime(i) && checkPrime(i + 2)) sum++;
  }
  return sum;
}
