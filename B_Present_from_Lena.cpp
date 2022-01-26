#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int j=-n; j<=n; j++){
        int front =n-abs(j);
        //for left spacing
        for(int i=0; i<abs(j); i++){
            cout<<"  ";
        }
        //leftmost pyramid
        for(int i=0; i<front; i++){
            cout<<i<<" ";
        }
        //rightmost pyramid
        for(int i=front; i>0; i--){
            cout<<i<<" ";
        }
        cout<<"0"<<endl;
    }
    return 0;
}