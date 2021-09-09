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

int getHeight(TreeNode<int>* root) {
    // Write your code here
  int ans=0;
    
for(int i=0;i<root->children.size();i++)
{
    int childheight=getHeight(root->children[i]);
    if(childheight>ans)
    {
        ans=childheight;
    }
    

}
    return ans+1;

}


/*void printatlevelk(TreeNode <int>* root,int k)
{
    if(root==NULL)
    return root;
    
    if(k==0)
    cout<<root->data<<endl;

  
   for(int i=0;i<root->children.size();i++)
   {
       printatlevelk(root->children[i],k-1);
   }

}
*/