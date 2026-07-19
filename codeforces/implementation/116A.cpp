#include<bits/stdc++.h>
using namespace std;

int main(){
    int stops;
    cin>>stops;

    int total_in_out = 0;
    int max_capacity_tram = INT_MIN;
    
    while(stops--){
        int passanger_exits,passanger_enter;
        cin>>passanger_exits>>passanger_enter;

        int passanger_on_that_stop_net = passanger_enter - passanger_exits;
        total_in_out += passanger_on_that_stop_net;
        max_capacity_tram = max(max_capacity_tram,total_in_out);
          
    }

    if(total_in_out != 0)
    cout<<"invalid in out sequence";

    cout<<max_capacity_tram;
    
    return 0;
}