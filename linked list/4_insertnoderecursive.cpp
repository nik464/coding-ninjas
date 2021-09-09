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
        
Node*insertNode(Node*head, int i , int data)
{
    if(head==NULL)
    return head;

    Node*temp=head;
    if(i==0)
    {
        Node* newnode= new Node(data);
        newnode->next=temp;
        temp=newnode;
        return temp;
    }

    else
    {
       temp=temp->next;
       Node* x= insertNode(temp, i-1, data);
       head->next=x;
       return head; 
    }
}