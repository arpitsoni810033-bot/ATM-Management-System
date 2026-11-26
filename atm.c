#include <stdio.h>

int main()
{
    int pin = 1234;
    int enteredPin;
    int choice;
    int newPin;
    float balance = 5000;
    float amount;

    printf("===== WELCOME TO ATM =====\n");

    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin)
    {
        printf("Invalid PIN!\n");
        return 0;
    }

    printf("\nLogin Successful!\n");

    while (1)
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Change PIN\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Available Balance: Rs. %.2f\n",
                       balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);

                if (amount > 0)
                {
                    balance = balance + amount;
                    printf("Deposit Successful!\n");
                }
                else
                {
                    printf("Invalid amount!\n");
                }
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);

                if (amount > 0 && amount <= balance)
                {
                    balance = balance - amount;
                    printf("Please collect your money.\n");
                }
                else
                {
                    printf("Insufficient balance or invalid amount!\n");
                }
                break;

            case 4:
                printf("Enter new PIN: ");
                scanf("%d", &newPin);

                if (newPin >= 1000 && newPin <= 9999)
                {
                    pin = newPin;
                    printf("PIN changed successfully!\n");
                }
                else
                {
                    printf("PIN must be 4 digits!\n");
                }
                break;

            case 5:
                printf("Thank you for using our ATM!\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
