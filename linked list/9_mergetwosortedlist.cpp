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