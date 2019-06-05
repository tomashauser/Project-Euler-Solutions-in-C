/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

// Note: I am aware that there is a method which generates the answer but the point of this exercise is to program it.
#include <stdio.h>

int main() {
    int c;
    for (int a = 1; a < 1000; a++) { //There is no need to worry about upper limit - the program will stop when it finds the solution.
        for (int b = a; b < 1000; b++) { //Since adding is commutative, let's use a permutation without repetition.
            c = (1000 - a - b); //If a + b + c = 1000, then c = 1000 - a - b.
            if (a * a + b * b == c * c) { //If a^2 + b^2 = c^2, respectively a^2 + b^2 = (1000 - a - b)^2, is true, then also a + b + c = 1000 is true, since *c* negates *a* and *b* in a + b + c = 1000.
                printf("%d",a*b*c); //Print a product of those 3 numbers.
                return 0; //End the program so it doesn't have to run unnecessarily after we have found the answer.
            }
        }
    }
}
