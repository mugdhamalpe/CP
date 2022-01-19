#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int arr[m], initial_pos=1;
    ll time=0;

    for(int i=0; i<m; i++){
        cin>>arr[i];

        if(arr[i]>=initial_pos){
            time+=arr[i]-initial_pos;
        }else{
            time+=n-(initial_pos-arr[i]);
        }
        initial_pos=arr[i];
    }
    cout<<time<<endl;
    return 0;
}