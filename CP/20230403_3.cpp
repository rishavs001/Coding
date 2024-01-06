#include<bits/stdc++.h>
using namespace std;
vector<int> v;

void push(){
    int n;
    cout<<"Enter number to insert: ";
    cin>>n;
    v.push_back(n);
    cout<<"Element inserted\n";
}
void pop()
{
    if(v.size()==0)
    {
        cout<<"Queue empty";
    }
    else{
    reverse(v.begin(),v.end());
    v.pop_back();
    reverse(v.begin(),v.end());
    cout<<"Item dequeued";
    }
}

void display()
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}

int main()
{    
    int ch;
    while(1){
    cout<<"Enter choice\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n------------------------\n";
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