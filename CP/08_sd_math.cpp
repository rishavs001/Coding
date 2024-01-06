#include<bits/stdc++.h>
using namespace std;
int main()
{
  int size;
  cout<<"Enter size of the array \n";
  cin>>size;
  int arr[size];
  double mean=0,variance=0,sd,temp;
  cout<<"Enter the elements \n";
  for(int i=0;i<size;i++)
  {
     cin>>arr[i];
  }
  for(int i=0;i<size;i++)
  {
  	mean+=arr[i];
  }
  mean/=size;
  for(int i=0;i<size;i++)
  {
  	variance+=(arr[i]*arr[i]);
  }
  variance= variance / size;
  variance-=(mean*mean);
  sd=sqrt(variance);
  cout<<"Variance is           : "<<variance<<endl;
  cout<<"Standard deviation is : "<<sd;
  return 0;
}

