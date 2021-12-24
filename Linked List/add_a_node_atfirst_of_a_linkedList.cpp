//Author : Nahin the Coder
//Date : 24-12-2021


#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *link;
};

void addNode(Node **head,int item)
{
    Node *new_node = new Node;
    new_node->data = item;
    new_node->link = *head;
    *head = new_node;
    //return head;
}

int main()
{
    Node *head = new Node;
    head->data = 45;
    head->link = NULL;
    
    Node *second = new Node;
    second->data = 50;
    second->link = NULL;

    head->link = second;
    
    addNode(&head,90); //inserting a new node at first of linked list

    while(head != NULL)
    {
        cout<<head->data<<"\n";
        head = head->link;
    }


    return 0;
}
