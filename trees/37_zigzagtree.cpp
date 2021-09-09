#include<bits/stdc++.h>
using namespace std; 
 



template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};


void zigzagorder(BinaryTreeNode<int>* root)
{
    if(root==NULL)
    return;

    stack<BinaryTreeNode<int>*>s1;
    stack<BinaryTreeNode<int>*>s2;

    s1.push(root);
    while( !s1.empty() && !s2.empty())
    {
        while(!s1.empty())
        {
            BinaryTreeNode<int>*top= s1.top();
            s1.pop();
            cout<<top->data<<" ";

            if(top->left)
            s2.push(top->left);

            if(top->right)
            s2.push(top->right);

            
        }

        cout<<endl;

        while(!s2.empty())
        {
            BinaryTreeNode<int>*top= s2.top();
            s2.pop();
            cout<<top->data<<" ";
            if(top->right)
            s1.push(top->right);

            if(top->left)
            s1.push(top->left);

            
           

        }
         cout<<endl;
    }

}