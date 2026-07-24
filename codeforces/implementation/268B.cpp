#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n; 

    if(n == 1){
        cout<<1;
        return 0;
    }

    long long ans = n ;

    for(int i=1;i<n;i++){
        ans += i * (n - i);
    }

    cout<<ans;
    
    return 0;
}