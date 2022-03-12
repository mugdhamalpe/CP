#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void elegantGift(){
    ll n,m;
    cin>>n>>m;
    ll arr[n][m];
    string s; //of either 0 or 1
    for(ll i=0; i<n; i++){
        cin>>s;
        //len of s is m
        for(ll j=0; j<m; j++){
            arr[i][j]=s[j]-'0';//we want int val
        }
    }
    if(n==1 || m==1){
        cout<<"YES"<<endl;
        return;
    }else{
        for(ll i=0; i<n-1; i++){
            for(ll j=0; j<m-1; j++){
                ll count=0;
                //when there are 3 ones
                //0 1
                //1 1
                //numbers around the grid dont matter
                count+=arr[i][j];
                count+=arr[i+1][j];
                count+=arr[i][j+1];
                count+=arr[i+1][j+1];
                if(count==3){
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
        cout<<"YES"<<endl;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        elegantGift();
    }
    return 0;
}

//if either n=1, or m=1, ans = yes

//3 number of 1s - will always llersect 
//2, or 1 or 0 number of 1s - never llersect

