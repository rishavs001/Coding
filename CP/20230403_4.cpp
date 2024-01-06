#include<bits/stdc++.h>
using namespace std;
map<string, int>contact;

void push()
{
     int n;
    string s;
    cout<<"Enter name: ";
    cin>>s;
    cout<<"Enter number: ";
    cin>>n;
    contact.insert({s,n});
}
void pop()
{
    string s1;
    cout<<"Enter contact name to delete\n";
    cin>>s1;
    auto i = contact.find(s1);
    if (i != contact.end()) {
        contact.erase(i);
    cout<<"CONTACT DELETED";
    }
    else{
        cout<<"CONTACT NOT FOUND";
    }
}

void display()
{
    map<string, int>::iterator it = contact.begin();
    cout<<"NAME        NUMBER\n";
    while ( it != contact.end())
  {
    std::cout  << it->first << "    " << it->second << endl;
    ++it;
  }
}

int main()
{    
    int ch;
    while(1){
    cout<<"Enter choice\n1.INSERT\n2.DELETE\n3.DISPLAY\n------------------------\n";
    cin>>ch;
    switch(ch)
    {
        case 1:
            push();
            break;

        case 2:
            pop();
            cout<<endl;
            break;

        case 3:
            display();
            cout<<endl;
            break;

        default:
            cout<<"Wrong choice ...... Exited";
            exit(0);
    }
    }

    return 0;
}