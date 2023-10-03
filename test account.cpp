#include <iostream>
#include <string>

using namespace std;

class Account {
public:
  Account(int number, double balance = 0.0)
      : number(number), balance(balance) {}

  string toString() {
    // Use built-in function System.format() to form a formatted String
    return "Account[number=" + to_string(number) + ",balance=$" + to_string(balance) + "]";
  }

  /** Add the given amount to the balance */
  void credit(double amount) {
    balance += amount;
  }

  /** Subtract the given amount from balance, if balance >= amount */
  void debit(double amount) {
    if (balance >= amount) {
      balance -= amount;
    } else {
      cout << "amount exceeded" << endl;
    }
  }

  /** Transfer the given amount to Account another, if balance >= amount */
  void transferTo(double amount, Account& another) {
    if (balance >= amount) {
      this->balance -= amount;
      another.balance += amount;
    } else {
      cout << "amount exceeded" << endl;
    }
  }

private:
  int number;
  double balance;
};

/**
 * A Test Driver for the Account class.
 */
int main() {
  // Test Constructors and toString()
  Account a1(5566);
  cout << a1.toString() << endl;
  // Account[number=5566,balance=$0.00]
  Account a2(1234, 99.9);
  cout << a2.toString() << endl;
  // Account[number=1234,balance=$99.90]

  // Test getters
  cout << "The account Number is: " << a2.getNumber() << endl;
  // The account Number is: 1234
  cout << "The balance is: " << a2.getBalance() << endl;
  // The balance is: 99.9

  // Test credit(), debit() and transferTo()
  a1.credit(11.1);
  cout << a1.toString() <<
