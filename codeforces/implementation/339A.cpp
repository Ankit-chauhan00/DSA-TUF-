#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    vector<int> v(4,0);

    for(char ch: s){
        if(ch != '+'){
            v[ch - '0']++;
        }
    }

    int num = 1;

    for( char &ch: s){
        if(ch == '+')
        continue;

        // if count = 0 then update to next number
        while(v[num] == 0)
        num++;

        ch = num + '0';
        v[num] --;
    }

    cout<<s;

    return 0;
}