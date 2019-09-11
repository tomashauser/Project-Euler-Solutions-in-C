#include <stdio.h>

int GetNumberLength(int number);
int integerPow(int base, int exp);

int main() {
    int number = 1,  sumOfNumbers = 0, sumOfPowers;
    while (number < 1000000) {
        int numberLength = GetNumberLength(number), numberInArray[numberLength];
        numberToArray(numberInArray, number);
        for (int i = 0; i < numberLength; i++)
         sumOfPowers += integerPow(numberInArray[i], 5);
        if (sumOfPowers == number)
            sumOfNumbers += number;
        sumOfPowers = 0;
        number++;
    }
    printf("%d\n", sumOfNumbers); //443839
    return 0;
}

void numberToArray(int *numberInArray, int number) {
    int numberLength = GetNumberLength(number);;
    int dividor = integerPow(10, numberLength - 1);
    for (int i = 0; i < numberLength; i++) {
        numberInArray[i] = number / dividor;
        number -= numberInArray[i] * dividor;
        dividor /= 10;
    }
}

int GetNumberLength(int number) {
    int numberLength = 0;
    while (number != 0) {
        number /= 10;
        numberLength++;
    }
    return numberLength;
}

int integerPow(int base, int exp) {
    int result = 1;
    for (;;) {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        if (!exp)
            break;
        base *= base;
    }
    return result;
}
