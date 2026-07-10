#include<bits/stdc++.h>
using namespace std;

void priorityQueue(){
    // stores the highest element on the top (Max heap)
    priority_queue<int> pq;
    pq.push(2);
    pq.push(1);
    pq.push(20);
    pq.push(15);

    cout<<pq.top()<<" ";

    // stores the minimum element on top (MIN HEAP)
    priority_queue<int,vector<int>, greater<int>> min_haep_priority_queue;


}

int main(){
    priorityQueue();
    return 0;
}