//Author : Nahin the Coder
//Date : 31-12-2021

#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node *link;
};



void printList(Node *head)
{
    if(head == NULL)
    {
        cout<<"List is empty!"<<endl;
    }
    else
    {
        while(head!=NULL)
        {
            cout<<head->data<<endl;
            head = head->link;
        }
    }
}

Node *ReverseList(Node *head)
{
    Node *current = NULL;
    Node *prev = NULL;
    while(head != NULL)
    {
        current = head->link;
        head->link = prev;
        prev = head;
        head = current;
    }
    head = prev;
    return head;
}






int main()
{
    Node *head = new Node;
    Node *second = new Node;
    Node *third = new Node;
    Node *fourth = new Node;
    Node *fifth = new Node;

    head->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;
    fifth->data = 50;

    head->link = second;
    second->link = third;
    third->link = fourth;
    fourth->link = fifth;
    fifth->link = NULL;

    cout<<"\n\nMain Linked List :\n";
    printList(head);
    Node *temp;
    temp = ReverseList(head);
    cout<<"\n\nReverse Linked List :\n";
    printList(temp);










    return 0;
}
