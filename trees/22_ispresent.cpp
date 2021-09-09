
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
    


bool isPresent(TreeNode<int>* root, int x) {
    // Write your code here
     if(root->data==x)
    	return true;
    
    
   bool ans=false;
    for(int i=0;i<root->children.size();i++)
    {
         bool smallans=isPresent(root->children[i],x);
        
        if(smallans==true)
        {ans=smallans;}
    
    }
    
   return ans;
}