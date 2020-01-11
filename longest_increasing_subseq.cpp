#include<bits/stdc++.h>
using namespace std;

int lis(int a[], int n) {
    int LIS[n], max_len=-1;
    LIS[0]=1;
    
    for(int i=1; i<n; i++) {
        LIS[i]=1;
        for(int j=0; j<i; j++) {
            if(a[j]< a[i] && LIS[i] < LIS[j]+1) {
                LIS[i] = LIS[j]+1;
            }
        }
        max_len = max(max_len, LIS[i]);
    }
    
    return max_len;
}

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
	    cout << lis(a, n) << "\n";
	}
	return 0;
}
