#include <stdio.h>

int main() {
    // Go over main variable types.
    int interger = 4;
    double dubs = 8e12;
    float floaty = 14.653;
    char character = 'x';
    printf("Int: %d\nDouble: %lf\nFloat: %.3f\nChar: %c\n", interger, dubs, floaty, character);
    //Type conversions
    double floatyTrunc = (int)floaty;
    printf("Truncated Float: %.1lf\n", floatyTrunc);
    return 0;
}