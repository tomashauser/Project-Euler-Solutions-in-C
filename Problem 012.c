#include <stdio.h>

long numberOfDivisors(long x);

long main() {
    long x = 0;
    for (long i = 1; i < 100000000; i++) {
        x += i;
        if (numberOfDivisors(x) > 500) {
            printf("%lu\n", x); //76576500
            break;
        }
    }
    return 0;
}

long numberOfDivisors(long x) {
    if (x == 1)
        return 1;
    long divisors = 0;
    for (long i = 2; i < x; i++) {
        if (x % i == 0)
            divisors++;
    }
    return divisors + 2;
}
