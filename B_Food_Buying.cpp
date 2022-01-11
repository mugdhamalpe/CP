/*
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll t, s;
    cin>>t;
    ll count=0;
    while(t--){
        cin>>s;
        // cout<<s+s/10<<endl;
        while(s>=10){
            ll cashback = s / 10 * 10;
            count+=cashback;
            s=s-cashback+cashback / 10;
            // count+=cashback*10;
            // s=s%10;
            // s+=cashback/10;
            
            // int diff = s-cashback*10;
            // s=(s/10)+diff;
            //s+=cashback;
            // if(s<10){
            //     count+=s;
            //     s=0;
            // }
        }
        count+=s;
        cout<<count<<endl;

    }
    return 0;
}
*/
#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main() {
    ll t, s;
    cin >> t;
    while(t --) {
        cin>>s;
        int count = 0;
        while(s>=10) {
            int cashback = s/10;
            count+=cashback*10;
            s%=10;
            s += cashback;
            // if (s<10) {
            //     count+=s;
            //     s=0;
            // }
            // else {
                // int cashback = s/10;
                // count+=cashback*10;
                // s%=10;
                // s += cashback;
            // }
        }
        count+=s;
        cout<<count<< endl;
    }
    return 0;
}