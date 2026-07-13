#include<bits/stdc++.h>
using namespace std;

void explainFunction(){
    int arr[6] = {10,4,2,3,55};
    sort(arr, arr + 5);

    vector<int> v = {10,2,3,54,23,32};

    sort(v.begin() + 1,v.end() - 1);

    for(auto it = v.begin();it != v.end();it++){
        cout<<*it<<" ";
    }

    cout<<"Sum : "<< accumulate(v.begin(),v.end(), 0);

}

int main(){
    explainFunction();
    return 0;
}