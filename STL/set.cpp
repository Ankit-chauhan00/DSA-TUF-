#include<bits/stdc++.h>
using namespace std;

void explainSet(){
    set<int> st;
    st.insert(21);
    st.insert(2);
    st.insert(2);
    st.insert(22);
    st.insert(1);

    // How to find that the element exists
    auto it = st.find(22);

    if(it!= st.end())
     cout<<*it<<" ";

    it = st.find(23);
    if(it!= st.end())
        cout<<*it<<" ";
    else 
        cout<<"Not Found"<<" ";

    // count the frequescy of that element

    // it can be also used as to find the number exist in set or not
    auto countNum  = st.count(2);

    // erase the element in set or delete
    // st.erase(2); this is for silple deleting one element

    auto it1 = st.begin();
    it1++;
    auto it2 = st.end();
    it2++;

    // we have to pass the iterator in it 
    st.erase(it1, it2);

    


    cout<<"Count of the number is : "<<countNum;

}


int main(){
    explainSet();
    return 0;
}