#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<ll,ll>> arr;
        for(int i=0; i<n; i++){
            ll ele;
            cin>>ele;
            arr.push_back({ele,i+1});
        }
        if(n==1){
            cout<<"1 1"<<endl;
        }else{
            sort(arr.begin(), arr.end());
            //smallest ele at index-0
            //largest element at index-n-1
            cout<<arr[0].second<<" "<<arr[n-1].second<<endl;
        }
    }
    return 0;
}