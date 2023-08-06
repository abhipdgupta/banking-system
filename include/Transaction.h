#pragma once

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
