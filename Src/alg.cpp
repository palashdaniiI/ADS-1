// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
   bool isPrime = true;
   if (value == 0 || value == 1) { 
      isPrime = false;
   } 
   else { 
   for (int i = 2; i <= value / 2; ++i) { 
      if (value % i == 0) { 
          isPrime = false; 
      break; 
      } 
   } 
   } 
   return isPrime;
}

uint64_t nPrime(uint64_t n) {
    int count = 0;
    int prime = 0;
    while (1) {
        prime++;
        if (checkPrime(prime))
            count++;
        if (n == count)
            return prime;
    }
    return count;
}

uint64_t nextPrime(uint64_t value) {
    if (value <= 0) {
        return 1; 
    }
    while (1) {
        if (checkPrime(++value)) {
            return value;
        } 
        else {
            continue;
        }
    }
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    int prime = 2;
    while (prime < hbound) {
        if (checkPrime(prime)) {
            sum += prime;
        }
        prime++;
    }
    return sum;
}
}
