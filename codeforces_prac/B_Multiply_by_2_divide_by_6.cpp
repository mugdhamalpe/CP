#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll even_no=0, odd_no=0;
        while(n%2==0){
            n=n/2;
            even_no+=1; // no of 2s
        }
        while(n%3==0){
            n=n/3;
            odd_no+=1; // no of 3s
        }
        if(even_no>odd_no || n>1) //all 2s cant be eliminated so print -1
        {
            cout<<"-1"<<endl;
        }else if(n==1 && even_no<=odd_no) //till n=1 and rev of cond
        {
            cout<<(odd_no-even_no)+odd_no<<endl;
        }
    }
    return 0;
}