#include<bits/stdc++.h>
using namespace std;

bool Helper(char input[],int s, int e )
{
bool k;
if(s>e)
return true;
if(input[s]!=input[e])
return false;

bool k=Helper(input,s+1,e-1);
return k;
}



bool checkPalindrome(char input[])
{

int n=strlen(input);

return Helper(input+1,0,n-1);
}