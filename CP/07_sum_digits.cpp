#include<bits/stdc++.h>
using namespace std;

void sum(int num)
{
    int sum = 0;
    while(num){
    int rem = num%10;
    sum+=rem;
    num/=10;
    }
    cout<<"Sum Of Digits : "<<sum;
}

int rec_sum(int num)
{
	if(!num)return num;
	return (num%10)+rec_sum(num/10);
}

int main()
{
int num;
cout<<"Enter any number : ";
cin>>n;
sum(num);
cout<<"\nSum Of Digits using Recursive Function : "<<rec_sum(num);
return 0;
}
