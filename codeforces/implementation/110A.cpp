#include<bits/stdc++.h>
using namespace std;

// we can take string as input

int main(){
    string str;
    cin>>str;

    int luckey_digit_count = 0;

    for(int i=0;i<str.length();i++){
        if(str[i]=='4' || str[i]== '7')
        luckey_digit_count++;
    }

    cout<<((luckey_digit_count == 4 || luckey_digit_count == 7)? "YES" :"NO");
    return 0;
}