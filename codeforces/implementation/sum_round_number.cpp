#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin>>test_cases;

    while(test_cases--){
        int num;
        cin>>num;

        vector<int> v;

        int place = 1;

        while(num > 0){
            int last_dig = num % 10;
            int round_val = (place * 10) * last_dig;
            if(round_val != 0) v.push_back(round_val);
            num = num/10;
            place++;
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}