#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,l,x;
        cin>>n>>l>>x;
        if(n/2>=l){
            cout<<l*x<<endl;
        }else if(n==0){
            cout<<"0"<<endl;
        }else if(x==0){
            cout<<"0"<<endl;
        }else{
            cout<<(n-l)*x<<endl;
        }
    }
    return 0;
}