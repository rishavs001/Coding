#include <bits/stdc++.h>
using namespace std;
class Number {
private:
    int num;
public:
    Number();
    Number(int n);
    ~Number();
    int getNumber();
    void changeNumber(int n);
    bool isArmstrong();
    bool isPrime();
    int nextCoprime();
    int reverse();
};

Number::Number() {
    num = 0;
}

Number::Number(int n) {
    num = n;
}

Number::~Number() {
    std::cout << "Object destroyed for class Num" << std::endl;
}

int Number::getNumber() {
    return num;
}

void Number::changeNumber(int n) {
    num = n;
    cout<<"New number: "<<num<<endl;
}

bool Number::isArmstrong() {
    int temp = num;
    int temp1=temp,digit;
    int sum = 0,count=0;
    while (temp1 > 0) {
         digit = temp1 % 10;
        count++;
        temp1 /= 10;
    }
    while (temp > 0) {
         digit = temp % 10;
        sum += pow(digit,count);
        temp /= 10;
    }
    return sum == num;
}

bool Number::isPrime() {
    if (num <= 1) 
        return false;
    for (int i = 2; i < num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int Number::nextCoprime() {
    int n = num + 1;
    while (true) 
    {
        int flag = 0;
        for (int i = 2; i <= n / 2; i++) 
        {
            if (n % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) 
        return n;
        n++;
    }
}

int Number::reverse() {
    int temp = num;
    int reversed = 0;
    while (temp > 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }
    return reversed;
}

int main()
{
    cout<<"Enter number: ";
    int n,n2;
    cin>>n;
    Number n1(n);
   cout<<"The number is: "<< n1.getNumber()<<endl;
   cout<<"Enter number to be changed: ";
   cin>>n2;
    n1.changeNumber(n2);
    cout<<"If amstrong?: "<<n1.isArmstrong()<<endl;
    cout<<"If prime?: "<<n1.isPrime()<<endl;
    cout<<"Next coprime: "<<n1.nextCoprime()<<endl;
    cout<<"Reverse: "<<n1.reverse()<<endl;
    return 0;
}
