#include<bits/stdc++.h>
using namespace std;
// void insertionFront();
// void insertionRear();
// void insertionMiddle();
//void insertion();
//void display();
//void deletion();
struct node
{
    int data;
    node *next;
};
node *head=NULL,*temp,*temp1,*temp2,*newNode;
void insertion ()
{
    
    //node *temp;
     node *newNode = new node;
    int data;
    cin>>data;
    if(head==NULL)
    {
    head=newNode;
    newNode->data = data;
    newNode->next = NULL;
    temp=newNode;
    }
    else{
        temp->next=newNode;
        newNode->data = data;
        newNode->next = NULL;
        temp=newNode;
    }
}
void display()
{
    temp=head;
    if (temp == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    while (temp->next != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout <<temp->data<< endl;
}

void deletion()
{
    temp=head;
    if (temp == NULL) {
        cout << "List is already empty" << endl;
        return;
    }
    while ((temp ->next->next) != NULL) {
       // temp=head;
       // cout << head->data << " ";
        temp = temp->next;
        //temp=head;
    }
    temp->next= NULL;
   // cout << endl;

}
//node *head, *newnode, *temp;

int ch;
int main()
{
   // node *head=NULL;
    while(1)
    {
        cout<<"ENTER CHOICE\n1. INSERT \n2. DELETE\n3. DISPLAY\n______________________\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
            insertion();
            break;

            case 2:
            deletion();
            break;

            case 3:
            display();
            break;

            default:
            cout<<"WRONG CHOICE\nEXITED";
            exit(0);
        }
    }
    return 0;
}



