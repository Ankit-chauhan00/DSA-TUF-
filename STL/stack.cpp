#include<bits/stdc++.h>
using namespace std;

void explainStack(){
    // LIFO (last in first out)

    stack<int> st;
    st.push(12);
    st.push(32);
    

    while(st.empty() == false ){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
    explainStack();
    return 0;
}
