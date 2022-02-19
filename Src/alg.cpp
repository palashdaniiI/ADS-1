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
    while (true) {
        value++;
        if (checkPrime(value))
            return value;	
    }
    return value;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t prime, sum = 0;
    for (prime = 0; prime < hbound; prime++) {
        if (checkPrime(prime))
            sum += prime;
    }
    return sum;
}
