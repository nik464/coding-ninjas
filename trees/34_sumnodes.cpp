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

int getSum(BinaryTreeNode<int>* root) {
    // Write your code here
     if(root==NULL)
        return 0;
    if(root->left==NULL && root->right==NULL)
        return root->data;
    return getSum(root->left)+getSum(root->right)+root->data;
}