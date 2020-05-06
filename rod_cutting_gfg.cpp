/*
Problem link-
https://practice.geeksforgeeks.org/problems/cutted-segments/0
*/

#include<bits/stdc++.h>
using namespace std;

int maxSeg(int l, int cut[]) {
    int dp[l+1];
    dp[0]=0;
    for(int i=1; i<=l; i++) {
        int a,b,c;
        a=b=c=INT_MIN;
        if(cut[0]<=i) {
            a=1+dp[i-cut[0]];
        }
        if(cut[1]<=i) {
            b=1+dp[i-cut[1]];
        }
        if(cut[2]<=i) {
            c=1+dp[i-cut[2]];
        }    
        dp[i] = max(a, max(b,c));
    }
    return dp[l];
    /*if(l<=0) {
        return 0;
    }
    int a,b,c;
    a=b=c=INT_MIN;
    if(cut[0]<=l) {
        a=1+maxSeg(l-cut[0], cut);
    }
    if(cut[1]<=l) {
        b=1+maxSeg(l-cut[1], cut);
    }
    if(cut[2]<=l) {
        c=1+maxSeg(l-cut[2], cut);
    }
    return max(a, max(b,c));*/
}
int main()
{
	int t;
	cin >> t;
	while(t--) {
		int length;
		cin >> length;
		int cut[3];
		cin >> cut[0] >> cut[1] >> cut[2];
		cout << maxSeg(length, cut) << '\n';
	}
	return 0;
}