#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin>>test_cases;

    while(test_cases--){

        // a = cost of a single donut from shop 1
        // b = size of box at shop 2
        // c = cost of whole box as we can buy only in boxes from shop 2
        long long a,b,c;
        cin>>a>>b>>c;

        // buying from shop 1 must be cheaper
        // we can take any value as there can be multiple answers
        if(a >= c)
        cout<<-1<<" ";
        else
        cout<<1<<" ";

        // buying form 2nd shop will be cheaper 
        //the basic answer is buying the box quantity

        if(a*b <= c)
        cout<<-1<<"\n";
        else 
        cout<<b<<"\n";
    }
    return 0;
}