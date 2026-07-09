// In C++ the list is doubly liked list that contain a data, next node pointer and previous point pointer
#include<bits/stdc++.h>
using namespace std;

void createLists(){
    // initilalizing the list
    list<int> l1 = {1,20,30,122};

    // printing the list values
    for(auto it: l1){
        cout<<it<<" ";
    }
    
    // we can perform push_bac
    l1.push_back(100);
    l1.push_front(0);
    cout<<"\n";

    for(auto it: l1 ){
        cout<<it<<" ";
    }

    cout<<"\n";

    for(auto &it: l1){
        it +=5;
        cout<<it<<" ";
    }


}

int main(){
    createLists();
    return 0;
}