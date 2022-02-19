#include <cstdint>
#include <cmath>
#include "alg.h"


bool checkPrime(uint64_t value) {
    int prime;
    if (value < 2)
            return false;
    for (prime = 2; prime <= value; prime++) {
        if (value%prime == 0)
            if (value != prime)
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
    int a = value+1;
    while (true) {
        if (checkPrime(a))
            return a;
        a++;
    }
    return a;
}

uint64_t sumPrime(uint64_t hbound) {
    int sum = 0, prime;
    uint64_t sum = 0, prime;
    for (prime = 0; prime < hbound; prime++)
    if (checkPrime(prime))
        sum += prime;
    return sum;
}
