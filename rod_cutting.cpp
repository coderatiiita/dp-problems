#include<bits/stdc++.h>
using namespace std;

int rod_cutter(int cost[], int n) {
    int rod[n+1];
    rod[0] = 0;
    for(int i = 1; i <= n; i++) {
        int ans = INT_MIN;
        for(int j = 0; j < i; j++) { 
            ans = max(ans, cost[j] + rod[i-j-1]);
        }
        rod[i] = ans;
    }
    return rod[n];
}

int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int cost[n];
		for(int i=0; i<n; i++) {
		    cin >> cost[i];
		}
		cout << rod_cutter(cost, n) << "\n";
	}
	return 0;
}
