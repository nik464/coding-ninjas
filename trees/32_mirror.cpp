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

void mirrorbinarytree(BinaryTreeNode<int>* root)
{

    if(root==NULL)
    return;
    BinaryTreeNode<int>* temp=root->left;
    root->left=root->right;
    root->right=temp;

    mirrorbinarytree(root->left);
    mirrorbinarytree(root->right);
}


