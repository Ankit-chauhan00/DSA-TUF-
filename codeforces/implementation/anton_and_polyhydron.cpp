#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    map<string,int> mp = {
    {"Tetrahedron",4},
    {"Cube",6},
    {"Octahedron",8},
    {"Dodecahedron",12},
    {"Icosahedron",20}
    };

    int total_faces = 0;

    while(n--){
        string str;
        cin>>str;

        total_faces+=mp[str];
    }

    cout<<total_faces;

   
    return 0;
}