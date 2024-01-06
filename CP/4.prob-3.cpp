#include <iostream>
using namespace std;
class MyDate {
public:
    int day,month,year;
};
class Employee {
private:
    int empno;
    MyDate doj;
    double salary;
public:
    Employee(int empno,MyDate doj,double salary) {
        this->empno=empno;
        this->doj=doj;
        this->salary=salary;
    }
    Employee(const Employee & emp) {
        this->empno=emp.empno;
        this->doj=emp.doj;
        this->salary=emp.salary;
    }
    void setEmpdata(int empno,MyDate doj,double salary) {
        this->empno=empno;
        this->doj=doj;
        this->salary=salary;
    }
    void showEmpdata() {
        cout<<"Employee No: "<<empno<<endl;
        cout<<"Date of Joining: "<<doj.day<<"/"<<doj.month<<"/"<<doj.year<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
    friend void calculateTax(Employee emp);
};
void calculateTax(Employee emp) {
    double salary=emp.salary;
    double tax=0;
    if (salary>=100000 && salary<200000) {
        tax=0.1*salary;
    }
    else if (salary>=200000 && salary<500000) {
        tax=0.15*salary;
    }
    else if (salary>=500000) {
        tax=0.2*salary;
    }
    cout<<"Tax Payable: "<<tax<<endl;
}
int main() {
    int empno,day,month,year;
    double salary;
    MyDate doj;
    cout<<"Enter employee number: ";
    cin>>empno;
    cout<<"Enter date of joining (dd mm yyyy): ";
    cin>>doj.day>>doj.month>>doj.year;
    cout<<"Enter salary: ";
    cin>>salary;
    Employee emp(empno,doj,salary);
    emp.showEmpdata();
    calculateTax(emp);
    return 0;
}
