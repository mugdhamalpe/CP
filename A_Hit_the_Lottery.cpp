#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll n, res=0;
    cin>>n;
    int arr[]={100,20,10,5,1};
    //reverse(arr, arr+n);
    for(int i=0; i<5; i++){
        res+=n/arr[i]; //add result of div
        n=n%arr[i]; //decreament the n with the remainder
    }
    cout<<res<<endl;
    return 0;
}