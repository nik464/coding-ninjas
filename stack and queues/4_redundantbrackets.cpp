
#include <bits/stdc++.h>
using namespace std;

#include<stack>
bool checkRedundantBrackets(string expression) {
    
	// Write your code here
    bool ans =false;
    
    stack<char>s;
    
   for(int i=0;i<expression.length();i++)
   {     
       if(expression[i]=='+' ||  expression[i]=='-' ||expression[i]=='*' || expression[i]=='/')
           s.push(expression[i]);
    
      else if (expression[i]=='(' )
          s.push(expression[i]);
    
      else if (expression[i]==')'  )

      {  
         if(s.top()=='(' )
         { ans =true;
                     
         }
          
         while(s.top()=='+' ||  s.top()=='-' ||s.top()=='*' || s.top() =='/')
         { s.pop(); }
         
         s.pop();
         
     }
    
    
   }
    
    return ans;
    
}