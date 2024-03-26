#include <stdio.h>
int main() {
    printf("Taking fruit inventory:\n");
    int apples = 33;
    int bananas = apples+9;
    printf("There are %d banannas.", bananas);
    double grapes = 58;
    printf("\nThere are %.3lf grapes. We get precise with grapes.\n", grapes);
    float price = (apples*0.53)+(bananas*0.44)+(grapes*0.02);
    printf("------\n Total Price: $%.2f", price);
    //Just to make it look prettier in the terminal.
    printf("\n");
    
    return 0;
}