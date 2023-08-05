#include <iostream>
#include "MyBank.h"

int main() {
    using namespace MyBankingSystem;
     using namespace std;

    Account acc1("12345", 1000.0);
    acc1.deposit(500.0);
    acc1.withdraw(200.0);

    Account acc2("67890", 2000.0);
    acc2.deposit(1000.0);
    acc2.withdraw(300.0);

    Transaction t1("Deposit", 500.0);
    Transaction t2("Withdrawal", 200.0);
    Transaction t3("Deposit", 1000.0);
    Transaction t4("Withdrawal", 300.0);

    acc1.withdraw(2000.0); // Attempting to withdraw more than balance

    std::cout << "Account 1 Balance: " << acc1.getBalance() << std::endl;
    std::cout << "Account 2 Balance: " << acc2.getBalance() << std::endl;

    t1.printDetails();
    t2.printDetails();
    t3.printDetails();
    t4.printDetails();

    return 0;
}
