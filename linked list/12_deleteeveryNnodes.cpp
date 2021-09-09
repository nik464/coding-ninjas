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
	        }    };

Node *skipMdeleteN(Node *head, int M, int N)
{

    Node*curr=head, *t;
    int count;

    while(curr)
    {

        for(count=1;count<M && curr!=NULL;count++)
        curr=curr->next;
        
        if(curr==NULL)
        return;

        t=curr->next;
        
        for(count=1;count<N && curr!=NULL; count++)
        {
            Node*temp= t;
            t=t->next;
            free(temp);
        }

        curr->next=t;
        curr=t;

    }

}