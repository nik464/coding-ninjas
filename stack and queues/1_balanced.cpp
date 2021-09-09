#include<bits/stdc++.h>
using namespace std;
bool isBalanced(string expression) 
{
    // Write your code here
    stack <char>s;
    char x;
    for(int i=0;i<expression.length();i++)
    {
    
        if(expression[i]== '('  || expression[i]=='{' ||expression[i]=='[')
        {    s.push(expression[i]);
         
              continue;
        }
        
        if(s.empty())
            return false;
    
        switch (expression[i]) {
        case ')':
             
            // Store the top element in a
            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;
 
        case '}':
 
            // Store the top element in b
            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;
 
        case ']':
 
            // Store the top element in c
            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }
 
    // Check Empty Stack
    return (s.empty());
}


