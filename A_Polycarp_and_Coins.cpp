#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll c1, c2;
        c1=c2=n/3;
        if(n%3==0){
            cout<<c1<<" "<<c2<<endl;
        }else if(n%3==1){
            c1=c2+1;
            cout<<c1<<" "<<c2<<endl;
        }else if(n%3==2){
            c2=c1+1;
            cout<<c1<<" "<<c2<<endl;
        }
    }
    return 0;
}

//c1+2.c2=n
//minimize the diff of c1 and c2