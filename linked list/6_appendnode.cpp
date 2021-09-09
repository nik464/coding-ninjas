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


int length(Node* head)
{
int l=0;


Node*temp=head;
while(temp!=NULL)
 {temp=temp->next;
 l++;

 }

return l;
}


Node* Kappend(Node*head , int k)
{
    int l = length(head);

    Node* newtail;
    Node* newhead;
    Node* tail=head;

    int current =1;
    k=k%l;

    while(tail->next!=NULL)
    {
        if(current==l-k)
        newtail=tail;

        if(current=l-k+1)
        newhead=tail;

        tail=tail->next;
        current++;

    }
    
    newtail->next=NULL;
    tail->next=head;
    return newhead;
    
}
    


