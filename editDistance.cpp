#include<bits/stdc++.h>
using namespace std;

int opsReq(string &str1, string &str2, int n, int m) {
    int arr[n+1][m+1];
    for(int i=0; i<=n; i++) {
        for(int j=0; j<=m; j++) {
            if(i==0)    arr[i][j] = j;
            else if(j==0)    arr[i][j] = i;
            else if(str1[i-1]!=str2[j-1]) {
                arr[i][j] = 1+min(arr[i][j-1], min(arr[i-1][j], arr[i-1][j-1]));
            } else arr[i][j]=arr[i-1][j-1];        
        }
    }
    return arr[n][m];
    /*  Recursive way
    if(n==0 && m==0)    return 0;
    if(n==0)    return m;
    if(m==0)    return n;
    if(str1[n-1]!=str2[m-1]) {
        return 1 + min(opsReq(str1, str2, n, m-1), 
                    min(opsReq(str1, str2, n-1, m), opsReq(str1, str2, n-1, m-1)));
    }
    return opsReq(str1, str2, n-1, m-1);*/
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
		cout << opsReq(str1, str2, n, m) << '\n';
	}
	return 0;
}