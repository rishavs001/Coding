#include<bits/stdc++.h>
using namespace std;

void fun(int arr[],int size){
   int pos,left=0,right=0;
   cout<<"Enter position where operation is to be performed : ";
   cin>>pos;
   for(int i=0;i<pos;i++){
      if(arr[i]<a[pos])
        left++;
      }

    for(int i=pos+1;i<size;i++){
        if(arr[i]>a[pos])
         right++;
    }

   cout<<"Left  < array[pos] = "<<left<<endl;
   cout<<"Right > array[pos] = "<<right<<endl;
   return;
}
int main(){
  int size;
  cout<<"Enter the size of the array: ";
  cin>>size;
  int arr[size];
  cout<<"Enter the elements of the array: ";
  for(int i=0;i<size;i++)
     cin>>arr[i];
  fun(arr,size);
  return 0;
}


