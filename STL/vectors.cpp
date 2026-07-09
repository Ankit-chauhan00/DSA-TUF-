#include<bits/stdc++.h>
using namespace std;

void create_vector(){
    // vector initialization
    vector<int> v  = {0,2,4,2,3,23};

    // Creates a vector of size 10.
    // Every element is initialized to 8.
    vector<int> v2(10, 8);

    // 'it' is a COPY of each element.
    // The copy becomes 13, but the original vector remains unchanged.
    for (auto it : v2) {
        it += 5;
    }

    // 'it' is a REFERENCE to each element.
    // The actual elements in the vector are modified from 8 to 13.
    for (auto &it : v2) {
        it += 5;
    }

    for (auto it: v2){
        cout<<it<<" ";
    }



    // push and pop functions
    v.push_back(20);
    v.pop_back();

    // reverse iterator
    auto reverceBegin = v.rbegin();
    auto reverseEnd = v.rend();

    for (auto it = reverceBegin ; it < reverseEnd; it++){
        cout<<*it<<" ";
    }


    // Duplicating vector with begin and end so bigain + 1 exclude the first and start taking form 2 element
    vector<int> dupVec(v2.begin()+1,v.end());

    // erase 1 and last element
    v2.erase(v2.begin()+1, v2.end()-1);

    // insert in vector after the first element
    v2.insert(v2.begin()+1,4);



}
int main(){
    create_vector();
    return 0;
}