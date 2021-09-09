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




Node* swap(int x, int y, Node*head)
{   Node*p = head;

    Node*prev= NULL;

    while(p!=NULL && p->data!=x)
    {
        prev=p;
        p=p->next;
    }

    Node* px=p;
    Node* prevX= prev;



    Node* p1 = head;

    Node* prev1= NULL;

    while(p1!=NULL && p1->data!=y)
    {
        prev1=p1;
        p1=p1->next;
    }


    Node* py=p1;
    Node* prevY=prev1;

//search function ends
    Node*temp;
    temp=py->next;
    py->next=px->next;
    px->next=temp;

    if(prevX==NULL)   //px is head
      {
          head=py;
          prevY->next=px;
      }

    if(prevY==NULL)   //px is head
      {
          px=head;
          prevX->next=py;
      }

      if(prevX!=NULL  && prevY!=NULL)
      {
          prevX->next=py;
          prevY->next=px;
      }

      return head;
}


   
    




