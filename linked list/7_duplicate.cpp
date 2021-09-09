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


Node* removeduplicate(Node*head)

{

    if(head==NULL)
    return head;

    Node*temp =head;

    while(temp!=NULL && temp->next!=NULL)
    {
       if(temp->data ==temp->next->data)
       {
           temp->next=temp->next->next;
       }

       
    }

    if(temp==NULL)
    return temp;

    return head;

}