#include <iostream>
using namespace std;
class Account {
private:
    int accountno;
    double balance;
    static double totalbal;
public:
    Account(int accno,double bal) {
        accountno=accno;
        balance=bal;
        totalbal+=bal;
    }
    ~Account() {
        totalbal-=balance;
    }
    void deposite(double amount) {
        balance+=amount;
        totalbal+=amount;
    }
    void withdraw(double amount) {
        if (balance<amount) {
            cout<<"Insufficient balance in account "<<accountno<<endl;
        } else {
            balance-=amount;
            totalbal-=amount;
        }
    }
    static void addtobank(double amount) {
        totalbal+=amount;
    }
    static void deductfrombank(double amount) {
        totalbal-=amount;
    }
    void showAccountData() {
        cout<<"Account Number: "<<accountno<<endl;
        cout<<"Balance: "<< balance<<endl;
    }
    static void showTotalBalance() {
        cout<<"Total Balance: "<<totalbal<<endl;
    }
};
double Account::totalbal=0.0;
int main() {
    int accountno;
    double balance;
    cout<<"Enter account number: ";
    cin>>accountno;
    cout<<"Enter account balance: ";
    cin>>balance;
    Account acc(accountno,balance);
    acc.showAccountData();
    double amount;
    cout<<"Enter amount to deposit: ";
    cin>>amount;
    acc.deposite(amount);
    acc.showAccountData();
    cout<<"Enter amount to withdraw: ";
    cin>>amount;
    acc.withdraw(amount);
    acc.showAccountData();
    Account::showTotalBalance();
    return 0;
}
