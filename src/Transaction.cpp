#include <iostream>
#include "Transaction.h"

namespace MyBankingSystem {
    Transaction::Transaction(const std::string& transactionType, double amount)
        : transactionType_(transactionType), amount_(amount) {}

    void Transaction::printDetails() const {
        std::cout << "Transaction Type: " << transactionType_ << ", Amount: " << amount_ << std::endl;
    }
}
