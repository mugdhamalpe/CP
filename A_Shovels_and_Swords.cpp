#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        if(a>b){
            swap(a, b);
        }
        if(a<=b/2){
            cout<<a<<endl;
        }else{
            cout<<(a+b)/3<<endl;
        }
    }
    return 0;
}