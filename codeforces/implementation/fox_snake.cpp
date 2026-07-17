#include<bits/stdc++.h>
using namespace std;

int main(){
    // n is always odd
    int n,m;
    cin>>n>>m;

    bool isright = true;

    for(int i=0;i<n;i++){

        if(i % 2 == 0){
            for(int j=0;j<m;j++){
                cout<<"#";
            }
            cout<<endl;
        }else {
            if(isright){
                for(int j=0;j<m;j++){
                    if(j<m-1)
                    cout<<".";
                    else
                    cout<<"#";
                }
                isright = false;
                cout<<endl;
            }else {
                for(int j=0;j<m;j++){
                    if(j==0)
                    cout<<"#";
                    else
                    cout<<".";
                }
                isright = true;
                cout<<endl;
            }
        }
    }
    return 0;
}