/*


void removeword(TrieNode*root , string word)
{
    if(word.size()==0)
    {
        root->isTerminal=false;
        return;
    }


    TrieNode* child;
    int index= word[0]-'a';

    if(root->children[index]!=NULL)
    {
        child=root->children[index];
    }
    else
    return;

    removeword(child, word.substr(1));
}

if(child->isTerminal==false)
{
    for(int i=0;i<26;i++)
    {
        if(child->children[index]!=NULL)
        return;
    }

    delete child;
    root->children[index]=NULL;
    
}

*/