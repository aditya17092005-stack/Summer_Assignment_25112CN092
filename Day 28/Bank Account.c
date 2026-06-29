#include <stdio.h>
#include <string.h>

struct Account {
    int accountNumber;
    char name[50];
    float balance;
};
void addAccount(struct Account accounts[], int *numAccounts) {
    struct Account newAccount;
    printf("\nEnter account number: ");
    scanf("%d", &newAccount.accountNumber);
    printf("Enter account holder name: ");
    scanf("%s", newAccount.name);
    newAccount.balance = 0.0;
    accounts[*numAccounts] = newAccount;
    (*numAccounts)++;
    printf("\nAccount added successfully!\n");
}