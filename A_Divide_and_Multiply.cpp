#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll t, n;
    cin>>t;
    while(t--){
        cin>>n;
        ll arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        ll count=0, total=0;

        for(int i=0; i<n; i++){
            while(arr[i]%2==0){
                arr[i]/=2;
                count+=1;
            }
        }

        sort(arr, arr+n);

        for(int i=0; i<count; i++){
            arr[n-1]*=2;
        }

        for(int i=0; i<n; i++){
            total+=arr[i];
        }
        cout<<total<<endl;
    }

    return 0;
}