//Author : Nahin the coder
//Date : 20-12-2021

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int dataPart;
    Node *linkPart;
};


Node *InsertItem(Node *head,int item)
{
    Node *new_node = new Node;
    new_node->dataPart = item;
    new_node->linkPart = head;
    head = new_node;

    return head;

}

void printList(Node *head)
{
    if(head == NULL)
    {
        cout<<"Linked list is empty !"<<endl;
    }
    else
    {
        while(head != NULL)
        {
            cout<<head->dataPart<<endl;
            head = head->linkPart;
        }
    }
}


Node *deleteLinkedList(Node *head)
{
    if(head == NULL)
    {
        cout<<"Linked List is already empty !"<<endl;
    }
    else
    {
        Node *temp = head;
        while(temp != NULL)
        {
            temp = temp->linkPart;
            free(head);
            head = temp;
        }
    }
    return head;
}

void DeleteNode(Node **head,int item)
{
    Node *temp = *head;
    Node *previous = NULL;

    // if head holds item itself
    if(temp != NULL and temp->dataPart == item)
    {
        *head = temp->linkPart;
        delete temp;
        return;
    }
    else
    {
        while(temp != NULL and temp->dataPart != item)
        {
            previous = temp;
            temp = temp->linkPart;
        }
        if(temp == NULL)
        {
            cout<<"We couldn't found your item in linked list !"<<endl;
            return;
        }
        else
        {
            previous->linkPart = temp->linkPart;
            delete temp;
        }
    }
}






int main()
{
    Node *head = NULL;

    int n;
    cout<<"Enter the number of node : "; cin>>n;
    for(int i=0; i<n; i++)
    {
        int item;
        cout<<"Enter "<<i+1<<" no item : "; cin>>item;
        head = InsertItem(head,item);
    }
    
    cout<<"\nOur linked list :\n";
    printList(head);
    int k;
    cout<<"Enter the item you wanna remove from list : "; cin>>k;
    DeleteNode(&head,k);
    //Node *check = deleteLinkedList(head);
    cout<<"After deleted "<<k<<" \n";
    printList(head);

    return 0;
}
