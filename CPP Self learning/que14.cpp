#include<iostream>
using namespace std;

class InvalidChoice {
private:
    string message;

public:
    InvalidChoice(string message) {
        this->message = message;
    }

    string getMessage() {
        return this->message;
    }
};

class InsufficientBalance {
private:
    string message;

public:
    InsufficientBalance(string message) {
        this->message = message;
    }

    string getMessage() {
        return this->message;
    }
};

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount() : accountNumber(0), accountHolderName(""), balance(0) {}

    BankAccount(int accountNumber, string accountHolderName, double balance): accountNumber(accountNumber),accountHolderName(accountHolderName),balance(balance) {}

    void deposit(double amount) {
        if(amount < 0) {
            throw InvalidChoice("Deposit amount cannot be negative");
        }

        balance = balance + amount;
    }

    void withdraw(double amount) {
        if(amount < 0) {
            throw InvalidChoice("Withdrawal amount cannot be negative");
        }

        if(amount > balance) {
            throw InsufficientBalance("Insufficient balance");
        }

        balance = balance - amount;
    }

    void displayBal() {
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolderName << endl;
        cout << "Account Balance : " << balance << endl;
    }
};


int main() {

    try {
        BankAccount ba(12345, "Sachin", 100);

        ba.deposit(500);
        ba.withdraw(100);

        ba.displayBal();
    }

    catch(InvalidChoice e) {
        cout << "Invalid Choice: " << e.getMessage() << endl;
    }

    catch(InsufficientBalance e) {
        cout << "Balance Error: " << e.getMessage() << endl;
    }

    return 0;
}