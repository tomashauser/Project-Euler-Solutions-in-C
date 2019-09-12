#include <stdio.h>
#include <stdint.h>

int main() {
    int numberOfSteps = 1, greatestNumberOfSteps = 0;
    int64_t greatestX, mirrorX;
    for (int64_t x = 1; x < 1000000; x++) {
        mirrorX = x;
        while (x > 1) {
            if (x % 2 == 0) {
                x /= 2;
                numberOfSteps++;
            }
            else {
                x = (3 * x + 1) / 2;
                numberOfSteps += 2;
            }
        }
        if (numberOfSteps > greatestNumberOfSteps) {
            greatestNumberOfSteps = numberOfSteps;
            greatestX = mirrorX;
        }
        numberOfSteps = 0;
        x = mirrorX;
    }
    printf("%d\n", greatestX); //837799
}
