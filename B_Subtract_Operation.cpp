#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int vecu[n];
        //vector<int> vecu(n);
        bool flag=false;
        for(int i=0; i<n; i++){
            cin>>vecu[i];
        }
        sort(vecu, vecu+n);
        int i=0, j=1;
        while(j<n && i<n){
            if(k==abs(vecu[j]-vecu[i])){
                flag=true;
                break;
            }
            else if(k<abs(vecu[j]-vecu[i])){
                i+=1;
            }else{
                j+=1;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}