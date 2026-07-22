// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string str;
//     cin>>str;

//     string ans = "";

//     for(char ch: str){
//         ch = tolower(ch);

//         if(ch == 'a'|| ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')

//         continue;

// After continue the else is not needed
//         else {
//             ans += '.';
//             ans+= ch;
//         }

//     }

//     cout<<ans;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    string ans = "";

    for (char ch : str) {
        ch = tolower(ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' || ch == 'y')
            continue;

        ans += '.';
        ans += ch;
    }

    cout << ans;
    return 0;
}