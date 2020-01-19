#include<bits/stdc++.h>
using namespace std;

int ways(int n, int m) {
    int ways[n][m];
    //for all rows
    for(int i=0; i<n; i++) {
        ways[i][m-1] = 1;
    }
    //for all coloumns
    for(int j=0; j<m; j++) {
        ways[n-1][j] = 1;
    }
    
    for(int i=n-2; i>=0; i--) {
        for(int j=m-2; j>=0; j--) {
            ways[i][j] = (ways[i+1][j] % 1000000007 + ways[i][j+1] % 1000000007)  % 1000000007; 
        }
    }
    return ways[0][0];
}

int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		cout << ways(n, m) << "\n";
	}
	return 0;
}
