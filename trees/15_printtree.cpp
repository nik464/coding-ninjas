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

void printlevelwise(TreeNode<int>* root)
{
    if(root->data==NULL)
    return;

   queue<TreeNode<int>*> printNode ; //treenode

   printNode.push(root);

   while(printNode.size()!=0)
   {
       TreeNode<int>* front= printNode.front();
       printNode.pop();
      
       cout<<front->data<<":";
       for(int i=0;i<front->children.size();i++)
       {
           printNode.push(front->children[i]);
           
           if(i<(front->children.size()-1))
           cout<<front->children[i]->data<<",";
           else
           cout<<front->children[i]->data;

       }
       cout<<endl;
   }
}


/* int numNodes(Tree<int>*root)
{   
    if(root==NULL)
    return 0;
    
    int ans =1;
    for(int i=0;i<root->children.size();i++)
    {
        ans+=numNodes(root->children[i]);
    }
    return ans;
}

*/

