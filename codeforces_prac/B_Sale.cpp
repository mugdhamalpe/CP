#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int arr[n];
    int money=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //sort(arr, arr+n);
    for(int i=0; i<n; i++){
        if(arr[i]<0){
        money+=arr[i];
        }
    }
    if(money<=m){
        cout<<-money;
    }
    else{
        cout<<m<<endl;
    }
    return 0;
}
