#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

namespace MyBankingSystem {
    class Account {
    public:
        Account(const std::string& accountNumber, double balance);

        void deposit(double amount);
        void withdraw(double amount);
        double getBalance() const;
        std::string getAccountNumber() const;

    private:
        std::string accountNumber_;
        double balance_;
    };
}

#endif // ACCOUNT_H
