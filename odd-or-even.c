#include <stdio.h>

int main() {
    printf("Hello. I am an odd-or-even machine. Please enter a whole number, and I will tell you whether that number is odd or even.\n");
    int number;
    scanf("%d", &number);
    int remainder = (number % 2);
    (remainder == 0)? printf("That number is even. You're welcome.\n") : printf("That number is odd. You're welcome.\n");
    return 0;
}