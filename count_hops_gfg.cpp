/*
Problem Link:
https://practice.geeksforgeeks.org/problems/count-number-of-hops/0
*/
#include<bits/stdc++.h>
using namespace std;

int noOfWays(int n) {
    int dp[n+1];
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    for(int i=3; i<=n; i++) {
        dp[i]=dp[i-1] + dp[i-2] + dp[i-3];
    }
    return dp[n];
    /*
    if(n<0) {
        return 0;
    } else if(n==0) return 1;
    return noOfWays(n-1)+noOfWays(n-2)+noOfWays(n-3);
    */
}
int main()
{
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    cout << noOfWays(n) << '\n';
	}
	return 0;
}