#include <stdio.h>
int main() {
    printf("Taking fruit inventory:\n");
    int apples = 33;
    float applePrice = 0.53;
    printf("There are %d apples. Apples cost $%.2f each.\n", apples, applePrice);
    int bananas = apples+9;
    float bananaPrice = 0.44;
    printf("There are %d banannas. Bananas cost $%.2f each.\n", bananas, bananaPrice);
    double grapes = 58;
    float grapePrice = 0.02;
    printf("There are %.3lf grapes. We get precise with grapes. Grapes cost $%.2f each.\n", grapes, grapePrice);
    int oranges;
    float orangePrice = 0.48;
    printf("Please enter the number of oranges. Oranges cost $%.2f each:\n", orangePrice);
    scanf("%d", &oranges);
    oranges--;
    printf("I ate an orange while you counted. There are now %d oranges.\n", oranges);
    float price = (apples*0.53)+(bananas*0.44)+(grapes*0.02)+(oranges*0.48);
    printf("------\n Total Price: $%.2f", price);
    //Just to make it look prettier in the terminal.
    printf("\n");
    
    return 0;
}