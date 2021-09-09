#include<bits/stdc++.h>
using namespace std;


class TrieNode{

public:
char data;

TrieNode ** children;
bool isTerminal;

TrieNode(char data)
{
    this->data=data;
    children = new TrieNode *[26];
    for(int i=0;i<26;i++)
    children[i]=NULL;


    isTerminal=false;


}



};



class Trie
{
    TrieNode *root;


public:
Trie()
{
root= new TrieNode('\0');
}


void insertword(TrieNode* root, string word)
{
    if(word.size()==0)
    {
        root->isTerminal=true;
        return;
    }

    int index= word[0]-'a';
       TrieNode* child; 
       if( root->children[index]!=NULL)
       child=root->children[index];

       else
       child= new TrieNode(word[0]);
       root->children[index]=child;

       insertword(child, word.substr(1));
       



}

void insertword(string word)
{
    insertword(root,word);
}

    
    bool search(TrieNode *root, string word)
    {
        if(word.size()==0  && root->isTerminal==true)
            return true;
        
         else if(word.size()==0  && root->isTerminal!=true)
             return false;
        
        int index= word[0]-'a';
        
        if(root->children[index]!=NULL)
            return search(root->children[index], word.substr(1));
        
        else
            return false;
        
        
    }
    
    bool search(string word) {
       return search(root,word);
    }
    



};