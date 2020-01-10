#include<bits/stdc++.h>
using namespace std;

int arr[100001];

void stoh() {
    //int arr[n+1];
    arr[0]=1;
    arr[1]=1;
    for(int i=2; i<=100001; i++) {
        arr[i] = (arr[i-1] % 1000000007 + arr[i-2] % 1000000007) % 1000000007;
    }
    //return arr[n];
}

int main()
{
	int t;
	cin >> t;
	stoh();
	while(t--) {
	    int n;
	    cin >> n;
	    cout << arr[n] << "\n";
	}
	return 0;
}
