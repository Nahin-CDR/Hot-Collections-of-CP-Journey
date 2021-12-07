//Author : Nahin the Coder
//Date  : 07-12-2021

#include<bits/stdc++.h>
using namespace std;

struct node{
	int dataPart;
	node *linkPart;
};

node *head = NULL;

node *insert(struct node *ptr,int n)
{
	node *new_node = new node;
	new_node->dataPart = n;
	new_node->linkPart = ptr;
	ptr = new_node;
	return ptr;
}

void printList(struct node *head)
{
	if(head == NULL)
	{
		cout<<"Linked List is empty !"<<endl;
	}
	else
	{
		while(head != NULL)
		{
			cout<<head->dataPart<<endl;
			head = head -> linkPart;
		}
	}
}

int main()
{
	int n;
	cout<<"Enter the number of nodes : "; cin>>n;
	cout<<"\n";
	for(int i=0; i<n; i++)
	{
		int node; cin>>node;
		head = insert(head,node);
	}
	cout<<"\n\n";
	printList(head);
	head = insert(head,100); //We can Add as many nodes as we want just we have to keep the last node address
	
	cout<<"\n\n";
	printList(head);
	return 0;
}
