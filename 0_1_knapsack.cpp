#include<bits/stdc++.h>
using namespace std;

int maxVal(int v[], int wt[], int N, int W) {
    if(N==0 || W==0)    return 0;
    if(wt[N-1]>W)   return maxVal(v, wt, N-1, W);
    else return max(v[N-1]+maxVal(v, wt, N-1, W-wt[N-1]), maxVal(v, wt, N-1, W));
}

int main()
{
	int t;
	cin >> t;
	while(t--) {
	    int N, W;
	    cin >> N >> W;
	    int v[N], wt[N];
	    for(int i=0; i<N; i++) {
	        cin >> v[i];
	    }
	    for(int i=0; i<N; i++) {
	        cin >> wt[i];
	    }
	    cout << maxVal(v, wt, N, W) << '\n';
	}
	return 0;
}