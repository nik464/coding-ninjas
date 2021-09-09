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
     if(root==NULL)
     return 0;

     return 1+max(height(root->left), height(root->right));
 }


bool isbalanced(BinaryTreeNode<int>*root)
{
   if(root==NULL)
   return NULL;

   int lh= height(root->left);
   int rh= height(root->right);


   if(lh-rh > 1 && rh-lh> 1)
     return false;

     if(abs(lh-rh)<=1  && isbalanced(root->left) && isbalanced(root->right))
     return true;

     return false;



}