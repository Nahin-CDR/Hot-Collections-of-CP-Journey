//Solver : Nahin the coder
//Date  : 06-12-2021

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data; 
    node *link;
};
node *head = NULL;

node *insertData(node *head)
{
    struct node *newNode = new node;
    cin>>newNode->data;
    newNode->link = head;
    head = newNode;
    return head;
}

void printData(node *head)
{
    if(head == NULL)
    {
        cout<<"Linked List is empty"<<endl;
    }
    else
    {
       
        while(head != NULL)
        {
            cout<<head->data<<endl;
            head = head->link;
        }
    }
}



int main()
{
    
    int n;
    cout<<"Enter number of NODE :";cin>>n;
    cout<<"\n";
    for(int i =0; i<n; i++)
    {
        head = insertData(head);
    }
    cout<<"\n\nMy linked List \n\n";
    printData(head);
    return 0;
}
