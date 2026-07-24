#include<bits/stdc++.h>
using namespace std;

int n,m;
const int INF = 1e9;
unordered_map<int,int> dp;

int solve(int cur){

    if(cur == 0)
    return 0;

    if(cur > m)
    return INF;

    if(dp.count(cur))
    return dp[cur];

    int ml2 = solve(cur * 2);
    int ml3 = solve(cur * 3);

    return dp[cur] = 1 + min(ml2,ml3);
}

int main(){
    cin>>n>>m;
    int ans = solve(n);

    if(ans >= INF)
    cout<< -1;
    else
    cout<< ans;

    return 0;
}