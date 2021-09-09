

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

    
bool areIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    // Write your code here
    
    
    if(root1->data != root2->data)
    {return false;
    
    }
    
    if(root1->children.size()!=root2->children.size())
    {
        return false;
    }
    bool ans =true;
    for(int i=0; i<root1->children.size(); i++)
        
    {
          bool smallans=areIdentical(root1->children[i], root2->children[i]);
        
         if(smallans==false)
         { ans=smallans;
         
         }
    }
    return ans;
    
    
}

