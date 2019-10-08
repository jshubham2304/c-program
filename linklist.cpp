
#include<bits/stdc++.h>

using namespace std;

class Linklist{

	

public:
		struct node{
			int data;
			node *next;
		};
		node *head,*tail;
		Linklist()
		{
			head=NULL;
			tail=NULL;
		} 
		void insertdata(int x){
			node *temp=new node;
			temp->data=x;
			temp->next=NULL;
			if(head==NULL)
			{
				head=temp;
				tail=temp;

			}
			else
			{
				tail->next=temp;
				tail=tail->next;

			}

		
		}
		void insertatpos(int x,int p)
		{
			node *temp=new node;
			temp->data=x;
			temp->next=NULL;
			if(head==NULL)
			{
				return;

			}
			node *trv=head;
			for(int i=1;i<p-1;i++)
			{
				trv=trv->next;

			}
			temp->next=trv->next;
			trv->next=temp;
			
		}
		void display()
		{
			node *temp=new node;
			temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
		}

};

int main()
{
	Linklist a;
	int n,x;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>x;
		arr[i]=x;
	}
	for(int i=0;i<n;i++)
	{
		a.insertdata(arr[i]);
	}
	int p;
	cin>>x;
	cin>>p;
	a.insertatpos(x,p);
	a.display();
}