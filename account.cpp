#include <iostream>
#include <string>

using namespace std;

class Account {
private:
    int number;
    double balance;

public:
    Account(int number) : number(number), balance(0.0) {}

    Account(int number, double balance) : number(number), balance(balance) {}

    int getNumber() {
        return number;
    }

    double getBalance() {
        return balance;
    }

    string toString() {
        return "Account[number=" + to_string(number) + ",balance=$" + to_string(balance) + "]";
    }

    void credit(double amount) {
        balance += amount;
    }

    void debit(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            cout << "amount exceeded" << endl;
        }
    }

    void transferTo(double amount, Account& another) {
        if (balance >= amount) {
            balance -= amount;
            another.balance += amount;
        } else {
            cout << "amount exceeded" << endl;
        }
    }
};

int main() {
    // Test Constructors and toString()
    Account a1(5566);
    cout << a1.toString() << endl;
    //Account[number=5566,balance=$0.00]
    Account a2(1234, 99.9);
    cout << a2.toString() << endl;
    //Account[number=1234,balance=$99.90]

    // Test getters
    cout << "The account Number is: " << a2.getNumber() << endl;
    //The account Number is: 1234
    cout << "The balance is: " << a2.getBalance() << endl;
    //The balance is: 99.9

    // Test credit(), debit() and transferTo()
    a1.credit(11.1);
    cout << a1.toString() << endl;
    //Account[number=5566,balance=$11.10]
    a1.debit(5.5);
    cout << a1.toString() << endl;
    //Account[number=5566,balance=$5.60]
    a1.debit(500);   // Test debit() error
    //amount exceeded
    cout << a1.toString() << endl;
    //Account[number=5566,balance=$5.60]

    a2.transferTo(1.0, a1);
    cout << a1.toString() << endl;
    //Account[number=5566,balance=$6.60]
    cout << a2.toString() << endl;
    //Account[number=1234,balance=$98.90]

    return 0;
}
