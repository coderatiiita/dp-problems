#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--) {
	    int n;
		cin >> n;
		
		int a[n];
		for(int i=0; i<n; i++) {
		    cin >> a[i];
		}
		
		int min_at_i[n], max_profit=INT_MIN;
		min_at_i[0] = a[0];
		
		for(int i=1; i<n; i++) {
		    if(a[i] < min_at_i[i-1]) {
		        min_at_i[i] = a[i];
		    } else {
		        min_at_i[i] = min_at_i[i-1];
		    }
		    
		    if(max_profit < a[i] - min_at_i[i-1]) {
		        max_profit = a[i] - min_at_i[i-1];
		    }
		}
		cout << max_profit << "\n";
	}
	return 0;
}
