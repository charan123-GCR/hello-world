/**  
 * @file finance.cpp  
 * @brief Implements the BankAccount class.  
 */  

#include "finance.h"  
#include <iostream>  

/**  
 * @brief Constructor for BankAccount class.  
 * @param name Account holder's name.  
 * @param initialBalance Starting balance.  
 */  
BankAccount::BankAccount(const std::string &name, double initialBalance)  
    : owner(name), balance(initialBalance) {}  

/**  
 * @brief Deposits money into the account.  
 * @param amount Amount to be deposited.  
 */  
void BankAccount::deposit(double amount) {  
    if (amount > 0) {  
        balance += amount;  
        std::cout << "Deposited $" << amount << " into " << owner << "'s account.\n";  
    } else {  
        std::cout << "Deposit amount must be positive.\n";  
    }  
}  

/**  
 * @brief Withdraws money from the account.  
 * @param amount Amount to be withdrawn.  
 * @return True if the withdrawal was successful, false otherwise.  
 */  
bool BankAccount::withdraw(double amount) {  
    if (amount > 0 && amount <= balance) {  
        balance -= amount;  
        std::cout << "Withdrawn $" << amount << " from " << owner << "'s account.\n";  
        return true;  
    } else {  
        std::cout << "Insufficient balance or invalid amount.\n";  
        return false;  
    }  
}  

/**  
 * @brief Gets the account balance.  
 * @return The current balance.  
 */  
double BankAccount::getBalance() const {  
    return balance;  
}  

/**  
 * @brief Gets the account owner's name.  
 * @return The owner's name.  
 */  
std::string BankAccount::getOwner() const {  
    return owner;  
}  

printf("hello world, my name is chitti, speed one terabyte.")

printf("this is 2.0")
