#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_case;
    cin>>test_case;
    
    while(test_case--){
        int a,b,n;
        cin>>a>>b>>n;

        int count = 0;
        while(max(a,b) <=n){
            count++;
            if(a<b){
                a+=b;
            }else{
                b+=a;
            }

        }
        
        cout<<count<<endl;
    }
    return 0;
}