// Author : Deepak Joshi
// Creation Time: 2021-11-11 21:15:34

#include<bits/stdc++.h>

using namespace std;

bool jumpSearch(int a[], int n, int key, int &cnt) {
    int l = 0;
    int m = sqrt(n) - 1;
	
    while(m < n && a[m] <= key) {
        cnt++;
		if(a[m] == key) {
			return true;
		}
        l = m;
        m += sqrt(n);
    }
	for (int i = l + 1; i < min(m, n); ++i) {
        cnt++;
		if(a[i] == key) {
			return true;
		}
	}
	return false;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k; 
		cin >> n;
		int* a = new int[n];
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		cin >> k;
        int cnt = 0;
		bool ispresent = jumpSearch(a, n, k, cnt);
		if(ispresent)
			cout << "Present " << cnt << endl;
		else
			cout << "Not Present " << cnt << endl;
	}
	return 0;
}
