//Author : Nahin the Coder
//Date  : 07-12-2021

#include<bits/stdc++.h>
using namespace std;

struct node{
	int dataPart;
	node *linkPart;
};

// node *head = NULL;

// node *insert(struct node *ptr,int n)
// {
// 	node *new_node = new node;
// 	new_node->dataPart = n;
// 	new_node->linkPart = ptr;
// 	ptr = new_node;
// 	return ptr;
// }

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
	struct node *head = new node;
	head->dataPart = 500;
	head->linkPart = NULL;
    
	struct node *current = new node;
	current->dataPart = 100;
	current->linkPart = NULL;

	head->linkPart = current; //linking first node to second node
	//we are keeping the address of second node into first node linkpart
	//so that we can access second node after accessing the first node

	printList(head);
	return 0;
}
