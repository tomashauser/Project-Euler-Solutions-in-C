//This is just a simplified version of the problem.
#include <stdio.h>

int main() {
    char number1[] = "37107287533902102798797998220837590246510135740250";
    char number2[] = "56376937677490009712648124896970078050417018260538";
    char result[50];
    int remainder = 0, resultArr[50];
    for (int i = 49; i > 0; i--) {
        resultArr[i] = number1[i] + number2[i] - 2 * '0' + remainder;
        remainder = 0;
        if (resultArr[i] > 9) {
            remainder = (resultArr[i] - (resultArr[i] % 10)) / 10;
            resultArr[i] = resultArr[i] % 10;
        }
    }
    resultArr[0] = number1[0] + number2[0] - 2 * '0' + remainder;
    for (int i = 0; i < 50; i++) {
        printf("%d", resultArr[i]);
    }
}
