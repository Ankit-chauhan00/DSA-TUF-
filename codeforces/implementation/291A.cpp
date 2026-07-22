#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin>>k;

    string str;
    cin>>str;

    map<char, int> mp;
    for(int i=0;i<str.length();i++){
        mp[str[i]]++;
    }

    string first_str = "";

    for(auto it: mp){
        if(it.second % k != 0){
            cout<<-1;
            return 0;
        }
        int char_count  = it.second/k;
        while(char_count){
            first_str += it.first;
            char_count--; 
        }
    }
    
    string ans = "";
    for(int i=0;i<k;i++){
        ans+= first_str;
    }

    cout<<ans;
    return 0;
}