#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin>> test_cases;

    while(test_cases--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> grid(n,vector<char>(m,'.'));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                char ch;
                cin>>ch;
                grid[i][j] = ch;
            }
        }

        int min_changes = INT_MAX;
        int changes_counter = 0;

        int posi = 0;
        int posj = 0;

        int ans = 0;

        for(int i=0;i<m-1;i++){
            if(grid[n-1][i] == 'D' )
            ans++;
        }
        for(int j=0;j< n-1;j++){
            if(grid[j][m-1] == 'R')
            ans++;
        }
        cout<<ans<<endl;

    }
    return 0;
}