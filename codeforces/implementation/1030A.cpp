// In search of an Easy problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    bool isHard = false;

    while(n--){
        int x;
        cin>>x;

        if(x == 1)
        isHard = true;
    }

    cout<< (isHard ? "HARD": "EASY");
    
    return 0;
}