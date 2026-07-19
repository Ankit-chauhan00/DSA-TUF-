#include<bits/stdc++.h>
using namespace std;

int main(){
    int banana_initial_cost,solder_money,banana_wants;
    cin>>banana_initial_cost>>solder_money>>banana_wants;
    int cost_of_bananas = ((banana_wants * (banana_wants + 1))/2) * banana_initial_cost;
    int borrow_amount = cost_of_bananas - solder_money;
    cout<<( borrow_amount > 0 ? borrow_amount : 0 );

    return 0;
}