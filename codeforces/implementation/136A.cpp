// presents 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    // reciver -> giver relation
    unordered_map<int,int>  mp;

    for(int i =1;i<=n;i++){
        int num;
        cin>>num;
        mp[num] = i;
    }

    for(int i=1;i<=n;i++){
        cout<<mp[i]<<" ";
    }

    return 0;
}