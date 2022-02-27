// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
  bool isPrime = true;
  uint64_t del = value/2;
  if ((value % 2 == 0 && value != 2) || value < 2)
    isPrime = false;
  for (uint64_t prime = 2 ; prime <= del ; prime++) {
    if (value % prime == 0) {
      isPrime = false;
      break;
    }
  }
  return isPrime;
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
  int a = value+1;
  while (true) {
    if (checkPrime(a))
      return a;
    a++;
  }
  return a;
}
uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (uint64_t prime = 2 ; prime < hbound ; prime++) {
    if ( checkPrime(prime) ) {
      sum += prime;
    }
  }
  return sum;
}
