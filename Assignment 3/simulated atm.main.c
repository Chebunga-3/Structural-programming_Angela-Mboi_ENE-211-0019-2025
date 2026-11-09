#include <stdio.h>
#include <stdlib.h>
 double current_balance;
 int correct_pin = 1234;
int login(){
    int entered_pin;
    int attempts = 0;
    int correct_pin = 1234;

    printf("================================\n");
    printf("      WELCOME TO THE ATM\n");
    printf("================================\n");

    while (attempts < 3){
        printf("Please enter your PIN: \n");
        scanf("%d",&entered_pin);
        if (entered_pin == correct_pin){
            printf("login successful \n");
            return 1;
        }
        else {
            attempts ++;
            printf("Incorrect PIN. You have %d attempts left\n",3 - attempts);
        }
    }
printf("You have exceeded the maximum number of attempts. Access denied\n");
return 0;
}

void show_menu() {
    printf("\n================================\n");
    printf("            ATM MENU\n");
    printf("================================\n");
    printf("1. Balance Inquiry\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("================================\n");
}

void check_balance(){
    double current_balance;
    printf("Your current balance is %.2f\n",current_balance);
}

void deposit(){
  double amount;
  printf("Enter amount to deposit:Ksh ");
  scanf("%lf", &amount);

  if (amount > 0){
    current_balance = current_balance + amount;
    printf("Your new balance: Ksh %.2lf", current_balance);
  }
  else {
    printf("Enter a valid amount\n");
  }
}

void withdraw(){
 double amount;
 printf(" Enter amount to be withdrawn: Ksh \n");
 scanf("%lf", &amount);

 if (amount <= 0){
    printf("Enter a valid amount\n");
 }
 else if ( amount > current_balance){
        printf("Error! Insufficient funds in your account.\n");
    }
    else {
      current_balance = current_balance - amount;
      printf("Your new balance: Ksh %.2lf\n", current_balance);
    }

}

int main() {
    int choice;
    int is_logged_in = login();

    if (is_logged_in == 0) {
        return 0;
    }

    while (1) {
        show_menu();
        printf("Select option (1-4): ");
        scanf("%d", &choice);
        if (choice == 1) {
            check_balance();
        }
        else if (choice == 2) {
            deposit();
        }
        else if (choice == 3) {
            withdraw();
        }
        else if (choice == 4) {
            printf("Thank you for using the ATM. Goodbye!\n");
            break;
        }
        else {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
