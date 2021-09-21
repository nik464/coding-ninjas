#include<bits/stdc++.h>
using namespace std;

int balancedtree(int n)
{
    int mod= (int) (pow(10,9))+7;


    long dp[n+1];

    dp[0]=dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[n]= (dp[i-1]*(   (2*dp[i-2])%mod  +  dp[i-1]%mod)%mod);




    }


  return dp[n];
  
}