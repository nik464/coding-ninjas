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


Node* mergetwolists(Node* head1, Node * head2)
{
    if(!head1)
    return head2;

    if(!head2)
    return head1;

    if(head1->data< head2->data)
    {
        head1->next=mergetwolists(head1->next, head2);
        return head1;
    }

    else
    {
        head2->next=mergetwolists(head1, head2->next);
        return head2;
    }
}

Node*mergesort(Node *head)
{

    if(head==NULL)
    return head;

    int count=0;
    Node*temp=head;


    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }

    if(count==0|| count==1)
    return head;
    

    Node*slow=head;
    Node*fast=head;


    while(fast!=NULL &&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

   Node*first=head;
   Node*second=slow->next;
   slow->next=NULL;


  first=mergesort(first);
  second=mergesort(second);

  head=mergetwolists(first,second);
  return head;
}



