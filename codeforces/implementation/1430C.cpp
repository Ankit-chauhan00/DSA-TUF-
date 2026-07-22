#include<bits/stdc++.h>
using namespace std;


int main(){
    int test_cases;
    cin>>test_cases;

    while(test_cases--){
        int n;
        cin>>n;

        vector<pair<int,int>> store;
        int cur = n;

        for(int i = n-1;i <=1;i--){
            store.push_back({cur,i});
            cur = ((cur + 1)/2);
        }
        cout<<cur<<"\n";

        for(auto it: store){
            cout<<it.first<<" "<<it.second<<"\n";
        }
    }
    return 0;
}