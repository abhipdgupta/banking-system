#include "Account.h"

namespace MyBankingSystem {
    Account::Account(const std::string& accountNumber, double balance)
        : accountNumber_(accountNumber), balance_(balance) {}

    void Account::deposit(double amount) {
        balance_ += amount;
    }

    void Account::withdraw(double amount) {
        if (amount <= balance_)
            balance_ -= amount;
        // You may want to handle insufficient funds scenario here
    }

    double Account::getBalance() const {
        return balance_;
    }

    std::string Account::getAccountNumber() const {
        return accountNumber_;
    }
}
