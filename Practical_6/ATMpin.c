#include <stdio.h>
// Bhaskar Ranjan 
// ERP 10383 
int main () {
    int pin = 1111;
    int enteredPin;
    printf("Enter ATM PIN: ");
    scanf("%d" , &enteredPin);
    int attempts = 3;
    while (attempts > 0) {
        if (enteredPin == pin) {
            printf("PIN accepted. You can now access your account.\n");
            break;
        } else {
            attempts--;
            if (attempts == 0) {
                printf("Account locked due to too many incorrect attempts.\n");
            } else {
                printf("Incorrect PIN. You have %d attempt(s) left. Try again: ", attempts);
                scanf("%d", &enteredPin);
            }
        }
    }
    return 0; 

}
// OUTPUT 
// Enter ATM PIN: 1234
// Incorrect PIN. You have 2 attempt(s) left. Try again: 1111
// PIN accepted. You can now access your account.