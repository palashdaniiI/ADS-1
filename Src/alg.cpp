#include <cmath>
#include <climits>
#include "alg.h"
#include <cstdint>

bool checkPrime(uint64_t value) {
// вставьте код функции
  bool isPrime = true;
    uint64_t del = sqrt(value);
    if ((value % 2 == 0 && value != 2) || value < 2) isPrime = false;
    for (uint64_t prime = 2 ; prime <= del ; prime++) {
        if (value % prime == 0) {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}
uint64_t nPrime(uint64_t n) {
// вставьте код функции
  uint64_t count = 0;
    uint64_t prime = 0;
        for (uint64_t j = 2 ; j <= ULONG_MAX ; j++) {
            if (checkPrime(j)) {
                prime += 1;
                if (prime == n) {
                    count = j;
                    break;
                }
            }
        }
        return count;
}
uint64_t nextPrime(uint64_t value) {
// вставьте код функции
  uint64_t count = 0;
    for (uint64_t prime = value + 1 ; prime <= ULONG_MAX ; prime++) {
        if (checkPrime(prime)) {
            count = prime;
            break;
        }
    }
    return count;
}
uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  uint64_t sum = 0;
    for (uint64_t prime = 2 ; prime < hbound ; prime++) {
        if ( checkPrime(prime) ) {
            sum += prime;
        }
    }
    return sum;
}
