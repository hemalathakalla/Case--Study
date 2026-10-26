#include <stdio.h>

int main()
{
    float balance, amount;
    int choice;

    printf("Enter current account balance: ");
    scanf("%f", &balance);


    printf("Enter choice (1 for Balance Inquiry, 2 for Cash Withdrawal, 3 for Cash Deposit): ");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
        printf("Current balance: %f\n", balance);
        break;

    case 2:

        printf("Enter withdrawal amount: ");
        scanf("%f", &amount);

        if (amount <= balance)
        {
            balance -= amount;
            printf("Transaction successful\nRemaining balance: %f\n", balance);
        }
        else

            printf("Insufficient balance\n");

        break;

    case 3:
        printf("Enter deposit amount: ");
        scanf("%f", &amount);
        balance += amount;
        printf("Deposit successful\nUpdated balance: %f\n", balance);
        break;

    default:
        printf("Invalid option\n");
        break;
    }
    return 0 ;

}
