#include<bits/stdc++.h>
using namespace std;

void explainQueue(){
    // FIFO (First in first out)

    queue<int> q;
    q.push(22);
    q.push(32);
    cout<<q.front()<<" "<<q.back()<<" ";
    
    while(q.empty() == false){
        cout<<q.front()<<" ";
        q.pop();
    }

}
int main(){
    explainQueue();
    return 0;
}