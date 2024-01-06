#include<bits/stdc++.h>
using namespace std;
class Account
{
    int accountno;
    int balance;

public:
    static int totalbal;
    Account(int x,int y): accountno(x),balance
    {
        totalbal+=y;
    }
    ~Account()
    {
        totalbal-=balance;
    }
    void deposite(int amount)
    {
        balance+=amount;
        totalbal+=amount;
    }
    void withdraw(int amount)
    {
        balance-=amount;
        totalbal-=amount;
    }
   static void addtobank(int amount)
    {
        totalbal+=amount;
    }
    static void deductfrombank(int amount)
    {
        totalbal-=amount;
    }
    void display()
    {
        cout<<"id is "<<accountno<<endl;
        cout<<"balance is "<<balance<<endl;
        cout<<"total balance  is "<<totalbal<<endl;

    }

};
int Account::totalbal;
int main()
{
    Account a1(1,100),a2(2,200);
    a1.display();
    a1.deposite(50);
    a1.withdraw(10);
    a1.display();
    a2.deposite(300);
    a2.withdraw(100);
    Account::addtobank(500);


    a2.display();

}