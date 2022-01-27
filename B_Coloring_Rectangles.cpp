#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t, n , m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        ll area=n*m;
        ll divi=area%3;
        if(divi==0){
            cout<<area/3<<endl;
        }else{
            cout<<area/3+1<<endl;
        }
    }
    return 0;
}