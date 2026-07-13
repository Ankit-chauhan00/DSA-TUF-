/*
TOY Boxes
*/ 


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int test_cases;
	cin>>test_cases;
	
    while (test_cases--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        long long total = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total += a[i];
        }

        sort(a.begin(), a.end());

        // edge case
        k = min(k, n - k);

        long long small = 0;

        for (int i = 0; i < k; i++)
            small += a[i];

        cout << total - 2 * small << endl;
    }

	
	return 0;
}
