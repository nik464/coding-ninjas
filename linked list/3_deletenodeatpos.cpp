#include<bits/stdc++.h>
using namespace std;

 class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

Node *deleteNode(Node *head, int pos)
{

if(head==NULL)
return head;

int count=0;
Node*temp=head;

while(temp!=NULL && count<pos-1 )
{   temp=temp->next;
    count++;
}

if(temp==NULL || temp->next==NULL)
return head;

Node*a=temp->next;
Node*b=a->next;
temp->next=b;
delete a;
return temp;
}