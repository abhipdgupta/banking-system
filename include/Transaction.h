#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

namespace MyBankingSystem {
    class Transaction {
    public:
        Transaction(const std::string& transactionType, double amount);

        void printDetails() const;

    private:
        std::string transactionType_;
        double amount_;
    };
}

#endif // TRANSACTION_H
