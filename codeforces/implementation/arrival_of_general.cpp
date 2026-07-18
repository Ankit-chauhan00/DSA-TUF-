#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int last_idx = n-1;
    int idx = 0;
    pair<int,int> min_elem = {INT_MAX,-1};
    pair<int,int> max_elem = {INT_MIN,-1};

    while(n--){
        int num;
        cin>>num;

        if(num <= min_elem.first){
            min_elem.first = num;
            min_elem.second = idx;
        }

        if(num > max_elem.first){
            max_elem.first = num;
            max_elem.second = idx;
        }

        idx++;
    }
    int ans = abs(min_elem.second - last_idx) + max_elem.second; 

    // is if the elements are crossing then arranging the position of one will afftect
    // the position of secon by 1 so we subtract 1
    // eg:- 1,2,3,4 here 1 has to be take in last in this swap 4 will be at last second so it requere 1step less
    if(max_elem.second > min_elem.second)
    ans--;

    cout<<ans;

    return 0;
}