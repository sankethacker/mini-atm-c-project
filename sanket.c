#include <stdio.h>

int main() {
    int pin = 1234;
    int userPin;
    int choice;
    int balance = 1000;  // basic starting balance
    int amount;

    printf("Enter PIN: ");
    scanf("%d", &userPin);

    if (userPin != pin) {
        printf("Wrong PIN!");
        return 0;
    }

    do {
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Balance = %d\n", balance);
        }
        else if (choice == 2) {
            printf("Enter amount: ");
            scanf("%d", &amount);
            balance += amount;
            printf("Money Deposited!\n");
        }
        else if (choice == 3) {
            printf("Enter amount: ");
            scanf("%d", &amount);

            if (amount <= balance) {
                balance -= amount;
                printf("Money Withdrawn!\n");
            } else {
                printf("Not enough balance!\n");
            }
        }
        else if (choice == 4) {
            printf("Thank you!\n");
        }
        else {
            printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}
