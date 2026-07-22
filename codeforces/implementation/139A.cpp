#include <bits/stdc++.h>
using namespace std;

int main() {
    int pages;
    cin >> pages;

    vector<int> a(7);
    for (int i = 0; i < 7; i++)
        cin >> a[i];

    int day = 0;

    while (pages > 0) {
        pages -= a[day];
        day = (day + 1) % 7;
    }

    day--;
    if(day == -1)
    day = 6;

    cout << day + 1;

    return 0;
}