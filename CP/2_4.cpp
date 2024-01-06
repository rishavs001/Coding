/*
Write a program in C++ to define an overloaded functions “plusoverloaded” that 
returns result depending on the type of inputs
i. if two floats are passed, then addition operation to be performed on inputs.
ii. if two strings are passed, then concatenation of two strings is performed.
iii. if an integer array, its size and an integer is passed then the given integer is 
added to all the elements of the array.
iv. If two integer arrays are passed, the both the arrays are merged by eliminating 
duplicate entries
*/
#include<bits/stdc++.h>
using namespace std;
void plusoverloaded(float a,float b)
{
    cout<<a+b<<endl;
}
void plusoverloaded(string a,string b)
{
    cout<<a+b<<endl;
}
void plusoverloaded(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]+2<<" ";
    }
    cout<<endl;
}
void plusoverloaded(int *arr1,int *arr2)
{
    vector<int>v;
    for(int i=0;i<5;i++)
    {
        v.push_back(arr1[i]);
    }
    for(int i=0;i<5;i++)
    {
        int flag=0;
        for(int j=0;j<v.size();j++)
        {
            if(arr2[i]==v[j])
            {
                flag=1;
            }
        }
        if(flag==0)
        v.push_back(arr2[i]);
    }
    for(int j=0;j<v.size();j++)
        {
            cout<<v[j]<<" ";
        }

}

int main()
    {
        int arr1[5]={4,7,6,2,8};
        int arr2[5]={7,2,6,3,4};
        plusoverloaded(2.0,3.0);
        plusoverloaded("rishav","shah");
        plusoverloaded(arr1,5);
        plusoverloaded(arr1,arr2);

        return 0;
    }
