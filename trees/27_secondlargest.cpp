






#include<bits/stdc++.h>
using namespace std; 
 
 template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;

        TreeNode(T data) {
            this->data = data;
        }

        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };
    

void helper(TreeNode<int> *  root,TreeNode<int> *  *first,TreeNode<int> *  *second){
    if(root==NULL)
    {
        return;
    
    }
    if(!(*first)){
        *first=root;
    }
    else if(root->data>(*first)->data){
        *second=*first;
        *first=root;
    }
    else if(!(*second)|| root->data>(*second)->data)
        *second=root;
    
    for(int i=0;i<root->children.size();i++)
        helper(root->children[i],first,second);
     
}







TreeNode<int>* getSecondLargestNode(TreeNode<int>* root) {
    // Write your code here
      TreeNode<int> *second=NULL;
    TreeNode<int> *first=NULL;
    helper(root,&first,&second);
        
        if(second==NULL)
            return NULL;
    if(first->data==second->data)
        return NULL;
    return second;
    // Write your code here
}

