#include<bits/stdc++.h>
using namespace std;

int countstepstoone(int n)
{ 
    int *dp =new int[n+1];
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;


   int ans1, ans2,ans3;

    for(int i=4;i<=n;i++)
    {  
        ans1=ans2=ans3=n;


        ans1=dp[i-1];

        if(i%2==0)
        ans2=dp[i/2];


        if(i%3==0)
        ans3=dp[i/3];



        dp[n]= min(min(ans1,ans2),ans3);



    }


    int ans=dp[n];
    delete dp;
    return ans;
}