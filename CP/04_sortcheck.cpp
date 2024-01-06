#include<bits/stdc++.h>
using namespace std;

bool asc(int *arr,int n){
    int flag = 0;
    for(int i=0;i<n-1;i++){
        if(*(arr+i)<*(arr+i+1))
        {
            flag = 1;
        }
        else{
            flag = 0;
            break;
        }
    }
    if(flag == 0)
        return false;

return true;
}

bool des(int *arr,int n){
int flag = 0;
    for(int i=0;i<n-1;i++){
        if(*(arr+i)>*(arr+i+1))
        {
            flag = 1;
        }
        else{
            flag = 0;
            break;
        }
    }
    if(flag == 0)
        return false;

return true;
}

int main()
{
int size,ele;

cout<<"Enter size of array :  ";
cin>>size;

int a[size];

cout<<"Enter elements of array :  ";
for(int i=0;i<size;i++){
            cin>>ele;
            a[i] = ele;
    }
cout<<"Array Elements :  ";
for(int i=0;i<size;i++){
            cout<<a[i]<<" ";
    }

if(asc(a,size)){
    cout<<"\n Array is sorted in ascending order";
}
else if(des(a,size)){
    cout<<"\n Array is sorted in descending order";
}
else{
    cout<<"\n Array is not sorted";
}

return 0;
}
