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






void printlevelwise(BinaryTreeNode<int>* root)
{
    if(root=NULL)
    return;

    queue<BinaryTreeNode<int>*> pendingnodes;
    
    pendingnodes.push(root);

    while(pendingnodes.size()!=0)
    {
        BinaryTreeNode<int>* front=pendingnodes.front();
        pendingnodes.pop();

        cout<<root->data<<":";

        if(front->left)
        {   pendingnodes.push(front->left);
            cout<<"L:"<<front->left->data;
        }

        else
        cout<<"L:-1";

        cout<<",";

        if(front->right)
        {   pendingnodes.push(front->right);
            cout<<"R:"<<front->right->data<<endl;

        }
        else
        cout<<"R:-1"<<endl;



    }
}