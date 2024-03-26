#include <stdio.h>
int main() {
    printf("Taking fruit inventory:\n");
    int apples = 33;
    printf("There are %d apples.\n", apples);
    int bananas = apples+9;
    printf("There are %d banannas.", bananas);
    double grapes = 58;
    printf("\nThere are %.3lf grapes. We get precise with grapes.\n", grapes);
    int oranges;
    printf("Please enter the number of oranges:\n");
    scanf("%d", &oranges);
    float price = (apples*0.53)+(bananas*0.44)+(grapes*0.02)+(oranges*0.48);
    printf("------\n Total Price: $%.2f", price);
    //Just to make it look prettier in the terminal.
    printf("\n");
    
    return 0;
}