#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin>>test_cases;

    while(test_cases--){
        int n;
        cin>>n;
        vector<int> nums;

        for(int i=0;i<2*n;i++){
            int x;
            cin>>x;
            nums.push_back(x);
        }

        sort(nums.begin(),nums.end());

        cout<<abs(nums[n] - nums[n-1])<<endl;
    }
    return 0;
}