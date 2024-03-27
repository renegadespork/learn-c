#include <stdio.h>
#include <stdbool.h>

int main() {
    // Go over main variable types.
    int interger = 4;
    double dubs = 8e12;
    float floaty = 14.653;
    char character = 'x';
    bool boolyeah = 10 != 'yourmom';
    bool boolnah = (25<interger);
    printf("Int: %d\nDouble: %lf\nFloat: %.3f\nChar: %c\nBoolyeah: %d\nBoolnah: %d\n", interger, dubs, floaty, character, boolyeah, boolnah);
    //Type conversions
    double floatyTrunc = (int)floaty;
    int hexy = (int)character;
    printf("---\nTruncated Float: %.1lf\nConverted Char: %d\n", floatyTrunc, hexy);
    // Time for some remainder trickery.
    int ford = 5;
    int chevy = 12;
    int gm = 12 % 5;
    // Intergers need to be converted to float BEFORE dividing, otherwise the answer will be truncated to an interger.
    float jeep = (float)gm / (float)ford;
    float toyota = (chevy / ford) + jeep;
    printf("---\nResult: %d / %d = %.1f. If I did this correctly, the answer should be 2.4.\n", chevy, ford, toyota);
    return 0;
}