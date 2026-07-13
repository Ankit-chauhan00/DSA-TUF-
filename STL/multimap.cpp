#include<bits/stdc++.h>
using namespace std;

void explainMultimap(){
    multimap<int,char> mpp;

    mpp.insert({1,'a'});
    mpp.insert({3,'a'});
    mpp.insert({1,'a'});
    mpp.insert({2,'b'});
    mpp.insert({2,'c'});
    mpp.insert({2,'a'});
    mpp.insert({1,'a'});
    mpp.insert({1,'a'});

    for(auto it: mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    auto it = mpp.equal_range(2);
    cout<<"Access particular Values"<<endl;

    for(auto i = it.first;i != it.second;i++){
        cout<<(*i).first<<"->"<<(*i).second<<endl;
    }
    
}

int main(){
    explainMultimap();
    return 0;
}