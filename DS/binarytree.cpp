#include<bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    int *left;
    int *right;
   // node()
}
    
node  create()
{
    node *newNode=new node;
    int value;
    cout<<"Enter val: ";
    cin>>value;
    if(value==0)
    {
        return;
    }
    newNode->val=value;
    cout<<"Enter left child: ";
    newNode->left=create();
    cout<<"Enter right child: ";
    newNode->right=create();
    return newNode;
}

int main()
{
    int choice;
    node *head=NULL;
    while(1){
    cout<<"Enter choice: 1.Enter 2. Display   ";;
    cin>>choice;
    if(choice==1)
    {
        head=create();
    }
    if(choice==2)
    {

    }
    else{
        exit(0);
    }
    }
}