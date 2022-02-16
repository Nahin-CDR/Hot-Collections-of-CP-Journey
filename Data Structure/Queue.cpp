#include<bits/stdc++.h>
using  namespace std;

int Q[10];
int front = -1;
int rear = -1;
int limit = 9;



void enQ(int value)
{
	if(rear == limit)
	{
		cout<<"Q is already Full !\n";
		cout<<"\n---Operation Executed---\n";
	}
	else
	{
		Q[++rear] = value;
		cout<<"\n---Operation Executed---\n";
	}
}

void dQ()
{
	if(rear == -1)
	{
		cout<<"Q is already empty !"<<endl;
		cout<<"\n---Operation Executed---\n";
	}
	else
	{
		for(int i=0; i<rear; i++)
		{
			Q[i] = Q[i+1];
		}
		--rear;
		cout<<"\n---Operation Executed---\n";
	}
}


void DisplayQ()
{
	if(rear == -1)
	{
		cout<<"Q is empty !"<<endl;
	}
	else
	{
		cout<<"My entire Q :\n";
		for(int i=0; i<=rear; i++)
		{
			cout<<Q[i]<<" ";
		}
		cout<<"\n---Operation Done---\n";
	}
}

int main()
{
	cout<<"WELCOME MASTER !\n\n";
	
	bool turn = true;

	while(turn)
	{
		cout<<"\n\n";
		cout<<"1 for enQ\n2 for dQ\n3 for display\n0 for end\n";
		int input; 
		cout<<"input :>"; cin>>input;
		switch(input){
			case 1:
			int n;
			cout<<"Enter number : "; cin>>n;
			enQ(n);
			break;

			case 2:
			dQ();
			break;

			case 3:
			DisplayQ();
			break;

			default:
			turn = false;
			break;

		}
	}
	
	return 0;
}
