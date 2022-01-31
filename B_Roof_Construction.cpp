#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        //int num=0;
        int num=log2(n-1);
        num=pow(2, num);
        for(int i=num-1; i>=0; i--){
            cout<<i<<" ";
        }
        for(int i=num; i<n; i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}