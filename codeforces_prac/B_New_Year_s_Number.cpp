#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int modu = n%2020;
        int divi = n/2020;
        if(modu>divi){
            cout<<"NO"<<endl;
        }else if(modu<=divi){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
