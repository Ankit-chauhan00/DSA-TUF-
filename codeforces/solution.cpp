#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    for(int i=0;i<s.size();i++){

        int last_digit = s[i] - '0';

        if(i == 0 && last_digit == 9)
        continue;

        if(last_digit>=5){
            s[i] = char('0' + (9 - last_digit));
        }
    }

    cout<<s<<endl;

    return 0;
}