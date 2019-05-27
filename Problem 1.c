#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 1; i < 1000; i++)
        sum += (i % 3 == 0 || i % 5 == 0) ? i : 0; //just wanted to make it neat (adding 0 is slowing it down a bit)
    printf("%d\n", sum);
}
