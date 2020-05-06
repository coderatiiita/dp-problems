/*
https://practice.geeksforgeeks.org/problems/longest-common-substring/0
*/
#include<bits/stdc++.h>
using namespace std;

int lcs(string &x, string &y, int n, int m, int count) {
    int dp[n+1][m+1];
    int result=0;
    for(int i=0; i<=n;i++) {
        for(int j=0; j<=m; j++) {
            if(i==0 || j==0) {
                dp[i][j]=0;
            } else if(x[i-1]==y[j-1]) {
                dp[i][j] = 1+dp[i-1][j-1];
                result = max(result, dp[i][j]);
            } else {
                dp[i][j]=0;
            }
        }
    }
    return result;
    /*if(n==0 || m==0)    return count;
    if(x[n-1]==y[m-1]){
        count = lcs(x,y,n-1,m-1,count+1);
    }
    count = max(count, 
                    max(lcs(x,y,n-1,m,0), lcs(x,y,n,m-1,0)));
    return count;*/
}
int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		string x, y;
		cin >> x >> y;
		cout << lcs(x, y, n, m, 0) << '\n';
	}
	return 0;
}