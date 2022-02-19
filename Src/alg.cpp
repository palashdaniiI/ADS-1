// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
  if (value == 0 || value == 1)
    return false;
  for (int i = 2; i <= value / 2; ++i) { 
    if (value % i == 0)
      if (value != i)
        return false; 
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  int prime = 0, count = 0;
  while (true) {
    prime++;
    if (checkPrime(prime))
      count++;
    if (count == n)
      return prime;
  }
  return count;
}

uint64_t nextPrime(uint64_t value) {
  int prime = value+1;
  while (true) {
    if (checkPrime(prime))
      return prime;
    prime++;
  }
  return prime;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t prime, sum = 0;
  for (prime = 0; prime < hbound; prime++)
    if (checkPrime(prime))
      sum += prime;
  return sum;
}
