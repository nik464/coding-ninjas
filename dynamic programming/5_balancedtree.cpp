#include <bits/stdc++.h>
#include <iostream>
using namespace std;



int main() {
    int n;
    cin >> n;
    cout << balancedBTs(n);
}

int balancedBTs(int n) {
    // Write your code here
      int mod = (int) (pow(10, 9)) + 7;
    long dp[ n + 1]; 
    //base cases 
    dp[0] = dp[1] = 1; 
    for(int i = 2; i <= n; i++) { 
        dp[i] = (dp[i - 1] * ((2 * dp [i - 2])%mod + dp[i - 1])%mod) % mod; 
    } 
    return dp[n];
}