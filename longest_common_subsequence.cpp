/*
https://practice.geeksforgeeks.org/problems/longest-common-subsequence/0
*/
#include<bits/stdc++.h>
using namespace std;

int lcs_func(string &str1, string &str2, int n, int m) {
    int lcs[n+1][m+1];
    for(int i=0; i<=n; i++) {
        for(int j=0; j<=m; j++) {
            if(i==0 || j==0)    lcs[i][j]=0;
            else if(str1[i-1] == str2[j-1]) {
                lcs[i][j]=1+lcs[i-1][j-1];
            } else {
                lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
            }
        }
    }
    return lcs[n][m];
    /*if(n==0 || m==0)    return 0;
    if(str1[n-1]==str2[m-1]) {
        return 1+lcs_func(str1, str2, n-1, m-1);
    } else {
        return max(lcs_func(str1, str2, n-1, m), 
                    lcs_func(str1, str2, n, m-1));
    }*/
}

int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		string str1, str2;
		cin >> str1 >> str2;
        cout << lcs_func(str1, str2, n, m) << '\n';
	}
	return 0;
}