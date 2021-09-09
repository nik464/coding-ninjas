

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


bool searchInBST(BinaryTreeNode<int> *root , int k) {
	// Write your code here
    if(root==NULL)
        return false;
    
    


    if(root->data==k)
        return true;
    
 
    
    if(root->data>k)
    {
      return searchInBST(root->left, k);
     
    }
    
    if(root->data<k) 
    {
        return searchInBST(root->right, k);
     
    }    
    
    
}


