/*
if(root==NULL)

return;

queue<TreeNode<int>*>pendingnodes;

pendingNodes.push(root);
while(pendingnodes.size()!=0)
{

    Treenode<int*>front=pendingnodes.front();
     pendingnode.pop();
        cout<<front->data<<":";
     for(int i=0;i<front->childeren.size(li++)
     pendignnode.push(front->children[i]))
}

Q1
if(sum<=smallsum){
    ans=childmax;
    sum=smallsum;
}



Q2

TreeNode<int>* max=NULL;
if(root->data>x)
max=root

void
{
for(int i=0;i<root->children.size();i++)
{
    TreeNode <int> * childmax=getlargeelement(root->children[i],x);
    if(childmax==NULL)
    {continue;}

    else {
        if(max==NULL)
        max=childmax;

        else if(childmax->data>x  && childmax->data< max->data)
        max=childmax;
    }

}

return childmax;

}



Q3
void helper(TreeNode<int>* root, TreeNode<int>* *first, TreeNode<int>* *second)
{
    if(root==NULL)
    return;


    if(!(*first))
    *first=root;

    else if( root->data> (*first)->data)
    {
        *second= *first;
        *first=root;
    }

    else if(!(*second)|| root->data>(*second)->data)
    {
        *second=root;
    }

    for(int i=0;i<root->children.size();i++)
    helper(root->children[i], first,second);
}
TreeNode<int>* getSecondLargestNode(TreeNode<int>* root) {

TreeNode<int>*first=NULL;
TreeNode<int>*second=NULL;

helper(root, &first,&second);
if(second==NULL)
return NULL;

if(first->data==second->data)
return NULL;

return second;

}

*/