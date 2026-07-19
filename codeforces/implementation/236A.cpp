#include<bits/stdc++.h>
using namespace std;

int main(){
    string username;
    cin>>username;

    vector<int> v(256,0);

    for(int i=0;i<username.length();i++){
        v[username[i]]++;
    }

    int char_count = 0;

    for(int i=0;i<v.size();i++){
        if(v[i] != 0)
        char_count++;
    }

    bool talk_or_not  = (char_count % 2) == 0 ;
    
    cout<<(talk_or_not ? "CHAT WITH HER!": "IGNORE HIM!");
    return 0;
}