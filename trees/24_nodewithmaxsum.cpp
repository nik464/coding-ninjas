
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

TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    // Write your code here

TreeNode<int>* ans=root;

int sum=root->data;

for(int i=0;i<root->children.size();i++)
{
    sum+= root->children[i]->data;  //sum of all its children
}


for(int i=0;i<root->children.size();i++)
{
    TreeNode<int>* maxchild=maxSumNode(root->children[i]);

    int smallsum=maxchild->data;

    for(int i=0;i<maxchild->children.size();i++)
    {
        smallsum+=maxchild->children[i]->data;
    }

    if(sum<=smallsum)
    {
        ans=maxchild;
        sum=smallsum;
    }
    return ans;
}

}


