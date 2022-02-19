#include <cstdint>
#include <cmath>
#include "alg.h"
bool checkPrime(uint64_t value) {
  if (value < 2) {
    return false;
  }
  if (value == 2) {
    return true;
  }
  for (int prime = 2; prime <= sqrt(value); prime++) {
    if (value % prime == 0) {
      return false;
    }
  }
  return true;
}
uint64_t nPrime(uint64_t n) {
  uint64_t num = 0;
  for (int prime = 2; ; prime++) {
    if (checkPrime(prime)) {
       num += 1;
       if (num == n) {
         return prime;
       }
     }
  }
}
uint64_t nextPrime(uint64_t value) {
  for (int prime = value + 1; ; prime++) {
    if (checkPrime(prime)) {
      return prime;
    }
  }
}
uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (int prime = 0; prime < hbound; prime++) {
    if (checkPrime(prime)) {
      sum += prime;
    }
  }
  return sum;
}
