#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    int side = 2*n + 1;

    for(int i=1;i<=side;i++){
        int count = 0;

        for(int j=1;j<=side;j++){

            if(j >= (side/2 - i +1) && j<= (side/2 + i -1 )){
                cout<<count<<" ";
                if(j < side/2 + 1)
                count++;
                else
                count--;
            
            }else{
                cout<<" ";
            }
        }
        cout<<endl;


    }
    return 0;
}