#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
int main() {
    printf("Welcome to the C fruit market.\n============================\n\"It's written in C, but our fruit is A+!\"\n============================\n");
    printf("Commencing new employee onboarding procedure. Please enter your name:\n");
    char name[64] = "";
    scanf("%s", name);
    printf("Hello, %s. Concluding new employee onboarding prodedure.\n", name);
    sleep(1);
    printf("Taking fruit inventory:\n");
    sleep(1);
    int apples = 33;
    float applePrice = 0.53;
    printf("There are %d apples. Apples cost $%.2f each.\n", apples, applePrice);
    sleep(1);
    int bananas = apples+9;
    float bananaPrice = 0.44;
    printf("There are %d banannas. Bananas cost $%.2f each.\n", bananas, bananaPrice);
    sleep(1);
    double grapes = 58;
    float grapePrice = 0.02;
    printf("There are %.3lf grapes. We get precise with grapes. Grapes cost $%.2f each.\n", grapes, grapePrice);
    sleep(1);
    int oranges;
    float orangePrice = 0.48;

    //Now for the interactive portion!
    printf("Please enter the number of oranges. DO NOT say more than 20. Oranges cost $%.2f each:\n", orangePrice);
    scanf("%d", &oranges);
    if (oranges > 20 && oranges < 100) {
        printf("User cannot follow instructions. Ending program...\n");
        sleep(2);
        printf("Goodbye.\n");
        return 1;
    }
    else if (oranges > 100) {
        printf("Don't be ridiculous. There aren't that many. Ending program...\n");
        sleep(2);
        printf("Goodbye.\n");
        return 1;
    }
    else if (oranges == 0) {
        printf("No oranges? Okay... :(\n");
    }
    else if (oranges < 0) {
        printf("How can there be negative oranges? Clearly you are incompetent. Ending program...\n");
        sleep(2);
        printf("Goodbye.\n");
        return 1;
    }
    else {
        oranges--;
        printf("I ate an orange while you counted. There are now %d oranges.\n", oranges);
    }
    float price = (apples*0.53)+(bananas*0.44)+(grapes*0.02)+(oranges*0.48);
    printf("------\n Total Price: $%.2f", price);

    //Just to make it look prettier in the terminal.
    printf("\n");
    return 0;
}
