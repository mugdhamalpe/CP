#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

ll sumDigits(ll n){
    ll sum=0; 
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main(){
    //ll n;
    string n, n1;
    cin>>n;
    ll ans, count=1, sum=0;
    if(n.length()!=1){
        for(int i=0; i<n.length(); i++){
            sum+=(n[i]-'0');
            //get integer value of each string char
        }
        while(sum>=10){
            ans=sum;
            sum=sumDigits(ans);
            count+=1;
        }
        cout<<count<<endl;
    }else{
        //length of string=0; 
        cout<<"0"<<endl;
    }
    // while(n!=0){
    //     sum+=n%10;
    //     n/=10;
    //     // if(sum<=n){
    //     //     count=count;
    //     // }else{
    //     //     count+=1;
    //     // }
    //     // if(n%10==0){
    //     //     break;
    //     // }
    // }
    //cout<<count<<endl;
    return 0;
}