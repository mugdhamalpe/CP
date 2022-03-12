#include <bits/stdc++.h>

using namespace std;

void bracket(int n){
    for(int i=0; i<n; i++){
        cout<<"(";
    }
    for(int i=0; i<n; i++){
        cout<<")";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0; i<n; i++){
            bracket(i);
            bracket(n-i);
            cout<<endl;
        }
    }
    return 0;
}