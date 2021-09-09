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


int height(BinaryTreeNode<int>* root)
{
    int h=0;
    if (root==NULL)
    return 0;

    int left= height(root->left);
    int right=height(root->right);

    if(left>right)
    return left+1;

    else
    return right+1;
}

