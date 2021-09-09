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

    Node *deleteNodeRec(Node *head, int pos) 
    {
    
    if(head==NULL)
    return head;

    Node*temp=head;
    if(pos==0)
    {
        temp=temp->next;
        delete head;
        head=temp;
        return head;

    }

      Node*x = deleteNodeRec(temp, pos-1);
      head->next=x;
      return head;
    }