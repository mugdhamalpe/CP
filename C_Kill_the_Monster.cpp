#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void killMonster(){
    ll hc,dc,hm,dm;
    int k,w,a;
    cin>>hc>>dc;
    cin>>hm>>dm;
    cin>>k>>w>>a;
    //k-max coins which can be spent
    //w-weapon upgrade
    //a-health upgrade
    ll nc, nm;
    for(int i=0; i<=k; i++){
        int j=k-i;
        //i coins->health and j coins->attack
        ll x=hc+i*a;
        ll y=dc+j*w;
        nc=(hm+y-1)/y;
        nm=(x+dm-1)/dm;
        if(nc<=nm){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        killMonster();
    }
    return 0;
}