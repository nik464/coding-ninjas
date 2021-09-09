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

Node* reverse(Node*head)

{
  Node*temp= reverse(head->next);

  Node* a=head->next;
  a->next= head;
  head->next=NULL;

  return temp;
   

}
  
bool isPalindrome(Node* head)
{
 if(head==NULL || head->next==NULL )
 return head;

 Node*slow=head;
 Node*fast=head;

 while(fast!=NULL && fast->next!=NULL)
 {
 slow=slow->next;
 fast=fast->next->next;

 }
 slow->next= reverse(slow->next);
 slow=slow->next;

 while(slow!=NULL)
 {
     if(head->data!=slow->data)
        return false;
     
     head=head->next;
     slow=slow->next;
 }

 return true;
}


