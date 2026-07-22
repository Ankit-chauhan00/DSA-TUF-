// Maximum increase

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> nums;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }

    if(nums.size() == 1){
        cout<<1;
        return 0;
    }

    int max_length = 1;
    int curr_length = 1;

    for (int i = 1; i < n; i++) {
    if (nums[i] > nums[i - 1])
        curr_length++;
    else
        curr_length = 1;

    max_length = max(max_length, curr_length);
}

    

    cout<<max_length;
    return 0;
}