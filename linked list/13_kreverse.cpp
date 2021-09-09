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



Node*krev(Node*head,int k)
{
    if(!head)
    return NULL;

    Node*current=head;
    Node*next=NULL;
    Node*prev=NULL;
    int count =0;

    if(k==0)
    return head;

    while(current!=NULL && count<k)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
        count++;
    }

    if(next!=NULL)
    head->next= krev(next,k);
    

    return prev;

}