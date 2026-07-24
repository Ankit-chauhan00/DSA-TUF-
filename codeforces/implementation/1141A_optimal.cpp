#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if (m % n != 0) {
        cout << -1;
        return 0;
    }

    int x = m / n;
    int moves = 0;

    while (x % 2 == 0) {
        x /= 2;
        moves++;
    }

    while (x % 3 == 0) {
        x /= 3;
        moves++;
    }

    if (x == 1)
        cout << moves;
    else
        cout << -1;

    return 0;
}