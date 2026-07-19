#include<bits/stdc++.h>
using namespace std;

int main(){
    int num, operation;
    cin>>num>>operation;

    while(operation-- && num > 0 ){
        int last_digit = num % 10;
        if(last_digit == 0){
            num = num/10;
        }else {
            num--;
        }
    }

    cout<<num;
    return 0;
}