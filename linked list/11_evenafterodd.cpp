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



void evenafterodd(Node *head)
{

Node* odd=head;
Node* even=head->next;
Node*evenstart=even;

while(odd!=NULL && even !=NULL)
{
odd->next=even->next;

odd=odd->next;

even->next=odd->next;

even=even->next;
}

odd->next=evenstart;
if(odd->next!=NULL)
even->next=NULL;



}