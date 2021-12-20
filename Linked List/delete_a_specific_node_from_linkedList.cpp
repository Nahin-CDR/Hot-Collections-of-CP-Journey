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





//here we are using double pointer because we wanna store here
//the address of a pointer variable which stores address of another variable

void DeleteNode(Node **head,int item)
{
    Node *temp = *head;
    Node *previous = NULL;

    //lets check if head node itself holds
    //the value we wanna delete
    if(temp != NULL and temp->dataPart == item)
    {
        *head = temp->linkPart; // change head
        delete temp; // free old head
        return;
    }
    else
    {
          //searching for the value to be deleted
        //and we will keep track of the previous node
        //for linking the previous node address part to
        //the next one
        while(temp != NULL and temp->dataPart != item)
        {
            previous = temp;
            temp = temp->linkPart;
        }
        if(temp == NULL)
        {
            //when we cannot find the value
            cout<<"We couldn't found your item in linked list !"<<endl;
            return;
        }
        else
        {
            // now its time to update link
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
   
    cout<<"After deleted "<<k<<" \n";
    printList(head);

    return 0;
}
