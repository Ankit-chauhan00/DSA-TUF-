#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    if(a > b){
        cout<<0;
        return 0;
    }

    int years = 0;

    while(a <= b){
        years++;
        a = (3 * a);
        b = (2 * b); 
    }
    cout<<years;
    return 0;
}