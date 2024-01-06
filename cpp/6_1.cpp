#include<bits/stdc++.h>
using namespace std;

class bicycle
{
    public:
    string frametype;
    int wheeldiameter;
    string handletype;

    public:
    void getData(string ft,int wd, string ht)
    {
        frametype=ft;
        wheeldiameter=wd;
        handletype=ht;
    }

    virtual void printData()
    {
        cout<<frametype<<" "<<wheeldiameter<<" "<<handletype<<endl;
    }

};

class MotorBike: public bicycle
{
    protected:
    int noofgears;
    int maxspeed;
    int enginecapacity;
    int meterreading;
    int fuelconsumed;
    public:
    void inputData(string ft,int wd, string ht, int ng,int ms, int ec,int mr,int fc)
    {
        frametype=ft;
         wheeldiameter=wd;
        handletype=ht;
        noofgears=ng;
        maxspeed=ms;
        enginecapacity=ec;
        meterreading=mr;
        fuelconsumed=fc;
    }

    void printData() override
    {
        cout<<noofgears<<" "<<maxspeed<<" "<<enginecapacity<<" "<<meterreading<<" "<<fuelconsumed<<endl;
    }

    void calmilage()
    {
        cout<<"MILAge\n";
    }
};

int main()
{
    bicycle b1;
    MotorBike m1;
    b1.getData("steel",7,"plastic");
    b1.printData();
    m1.inputData("iron",9,"wired",4,120,450,0,45);
        m1.bicycle::printData();

    m1.printData();
    m1.calmilage();


    return 0;
}