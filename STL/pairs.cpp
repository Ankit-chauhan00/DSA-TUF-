#include<bits/stdc++.h>
using namespace std;

void createPait(){
    pair<int, char> pr = make_pair(2,'d');
    cout<<pr.first<<" This was the first and second is "<<pr.second; 

    cout<<"\n";

    pair<int, float> pr2 = make_pair(2,3);
    cout<<pr2.first<<" This was the first and second is "<<pr2.second; 

    pair<pair<int,char>,float> nest = make_pair(make_pair(10,'r'),4);

    cout<<"\n"<<nest.first.first<<" This was the first one, second one is a character : "<<nest.first.second<<" And "<<nest.second;

    // pair can be initialized with curley braces

}

int main(){
    createPait();
    return 0;
}