#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, m, r, c;
    cin>>t;
    while(t--){
        cin>>n>>m>>r>>c;
    }
    char arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[r][j]=='B' || arr[i][c]=='B'){
                cout<<"1"<<endl;
            }else if(arr[r][j+1]=='B' || arr[i+1][j]=='B'){
                cout<<"2"<<endl;
            }else if(arr[r][c]=='B'){
                cout<<"0"<<endl;
            }else{
                cout<<"-1"<<endl;
            }
        }
    }
    return 0;
}