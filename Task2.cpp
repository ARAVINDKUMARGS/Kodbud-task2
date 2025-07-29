#include <iostream>
using namespace std;

class Bank {
    string name;
    int accNo;
    float balance;
public:
    void create() {
        cout << "Enter Name: "; cin >> name;
        cout << "Enter Account Number: "; cin >> accNo;
        cout << "Enter Balance: "; cin >> balance;
    }
    void deposit() {
        float amt;
        cout << "Enter deposit amount: "; cin >> amt;
        balance += amt;
    }
    void withdraw() {
        float amt;
        cout << "Enter withdraw amount: "; cin >> amt;
        if (amt > balance)
            cout << "Insufficient funds\n";
        else
            balance -= amt;
    }
    void display() {
        cout << "Name: " << name << "\nAccount: " << accNo << "\nBalance: " << balance << endl;
    }
};

int main() {
    Bank b;
    int ch;
    b.create();
    do {
        cout << "\n1.Deposit\n2.Withdraw\n3.Display\n4.Exit\nChoose: ";
        cin >> ch;
        switch (ch) {
            case 1: b.deposit(); break;
            case 2: b.withdraw(); break;
            case 3: b.display(); break;
            case 4: cout << "Exited.\n"; break;
            default: cout << "Invalid choice\n";
        }
    } while (ch != 4);
    return 0;
}
