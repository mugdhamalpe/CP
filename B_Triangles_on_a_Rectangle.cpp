#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t;
    cin>>t;
    ll w, h, k, x;
    
    while(t--){
        cin>>w>>h;
        ll maxi=0;
        for(int i=0; i<4; i++){
            cin>>k;
            ll count=0;
            for(int j=0; j<k; j++){
                cin>>x;
                if(j==0){
                    count=x;
                }else if(j==k-1){
                    count=x-count;
                }
            }
            if(i<2){
                count=count*h;
            }else{
                count=count*w;
            }
            
            maxi=max(maxi, count);
        }
        cout<<maxi<<endl;
    }
    return 0;
}