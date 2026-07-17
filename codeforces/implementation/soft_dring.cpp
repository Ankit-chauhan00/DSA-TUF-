#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int total_drink = k * l;
    int number_of_lime_slices = c * d;

    int number_of_toast_with_drink = (total_drink / nl);
    int number_of_toast_with_slice = number_of_lime_slices;
    int number_of_toast_with_salt = (p/np);

    int toast_can_be_made = min(number_of_lime_slices,min(number_of_toast_with_drink,number_of_toast_with_salt));

    cout<<toast_can_be_made/n;

    return 0;
}