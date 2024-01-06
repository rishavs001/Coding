#include<bits/stdc++.h>
using namespace std;
class Bicycle {
protected:
    string frametype;
    int wheeldiameter;
    string handletype;
public:
    Bicycle(){};
    Bicycle(string frametype, int wheeldiameter, string handletype) {
        this->frametype = frametype;
        this->wheeldiameter = wheeldiameter;
        this->handletype = handletype;
    }
    void getData() {
        cout << "Frame type: " << frametype << endl;
        cout << "Wheel diameter: " << wheeldiameter << " inches" << endl;
        cout << "Handle type: " << handletype << endl;
    }
    void printData() {
        cout << "Bicycle data:" << endl;
        getData();
    }
};
 
class MotorBike : public Bicycle {
private:
    int noofGears;
    int maxspeed;
    int enginecapacity;
    int meterreading;
    int fuelconsumed;
public:
    MotorBike(){};
    MotorBike(string frametype, int wheeldiameter, string handletype, int noofGears, int maxspeed, int enginecapacity, int meterreading, int fuelconsumed)
        : Bicycle(frametype, wheeldiameter, handletype) {
        this->noofGears = noofGears;
        this->maxspeed = maxspeed;
        this->enginecapacity = enginecapacity;
        this->meterreading = meterreading;
        this->fuelconsumed = fuelconsumed;
    }
    void inputData() {
        cout << "Enter number of gears: ";
        cin >> noofGears;
        cout << "Enter maximum speed (mph): ";
        cin >> maxspeed;
        cout << "Enter engine capacity (cc): ";
        cin >> enginecapacity;
        cout << "Enter meter reading (miles): ";
        cin >> meterreading;
        cout << "Enter fuel consumed (gallons): ";
        cin >> fuelconsumed;
    }
    void printData() {
        cout << "MotorBike data:" << endl;
        getData();
        cout << "Number of gears: " << noofGears << endl;
        cout << "Maximum speed: " << maxspeed << " mph" << endl;
        cout << "Engine capacity: " << enginecapacity << " cc" << endl;
        cout << "Meter reading: " << meterreading << " miles" << endl;
        cout << "Fuel consumed: " << fuelconsumed << " gallons" << endl;
    }
    double calmilage() {
        return static_cast<double>(meterreading) / fuelconsumed;
    }
};
 
int main() {
    string frametype,handletype;
    int wheeldiameter, noofGears,maxspeed,enginecapacity,meterreading,fuelconsumed;
    cout<<"Enter bicycle frame type: ";
    getline(cin,frametype);
    cout<<"Enter bicycle wheel diameter (inches): ";
    cin>>wheeldiameter;
    cin.ignore();
    cout<<"Enter bicycle handle type: ";
    getline(cin,handletype);
    cout<<"Enter MotorBike details: "<<endl;
    cout << "Enter number of gears: ";
    cin >> noofGears;
    cout << "Enter maximum speed (mph): ";
    cin >> maxspeed;
    cout << "Enter engine capacity (cc): ";
    cin >> enginecapacity;
    cout << "Enter meter reading (miles): ";
    cin >> meterreading;
    cout << "Enter fuel consumed (gallons): ";
    cin >> fuelconsumed;
    MotorBike bike(frametype,wheeldiameter,handletype,noofGears,maxspeed,enginecapacity,meterreading,fuelconsumed);
    bike.printData();
    cout << "Calculated mileage: " << bike.calmilage() << " miles/gallon" << endl;
    return 0;
}