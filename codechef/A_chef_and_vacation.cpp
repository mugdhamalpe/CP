#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x,y,z;
    while(n--){
        cin>>x>>y>>z;
        if(x+y<=z){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}